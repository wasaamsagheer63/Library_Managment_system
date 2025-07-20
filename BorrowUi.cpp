#include<ctime>
#include"BorrowUi.h"
#include"Admin/Book/Data_Layer/add_book.h"
#include<fstream>
#include<vector>
using namespace std;
void BorrowUI::BorrowBookUI(string username){
    bookView.fetchBook();
    cout<<"Enter Book ID which you want to Borrow: ";
    int book_ID;
    cin>>book_ID;
   
        string date;
        time_t now = time(0);
        tm *ltm = localtime(&now);

        char currentDate [11];
        strftime(currentDate, sizeof(currentDate), "%d-%m-%y", ltm);
        date=currentDate;
    


    int time;
while(true){
    cout<<"Enter Duration in Days  : ";
    cin>>time;
    if(!cin.fail()){break;}
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    
}
 
    time_t dueDate = now + (time*24*60*60);
    tm *ltdueDate = localtime(&dueDate);

        char DurationDate [11];
        strftime(DurationDate, sizeof(DurationDate), "%d-%m-%y", ltdueDate);

        string duration = DurationDate;

    


    if(borrowb.borrowbookb(username,book_ID,date,duration)){
        ifstream inFile("book.txt");
        vector<Book> book;
        int id,quan;
        string name,auther;
        if(inFile.is_open()){
            while(inFile >> id >> name >> auther >> quan){
                if(id == book_ID){
                    quan--;
                    book.emplace_back(id,name,auther,quan);
                }
                else{
                 book.emplace_back(id,name,auther,quan);   
                }
            }
        }else{
            cout<<"You are not able to borrow"<<endl;
        }
        inFile.close();

       ofstream outFile("book.txt");
if(outFile.is_open()){
    for(Book& afterBorrowBook:book){
        outFile << afterBorrowBook.book_id <<" "<< afterBorrowBook.book_name <<" "<< afterBorrowBook.book_auther<<" "<<afterBorrowBook.book_quantity << endl; 
    }
    outFile.close();
}


        cout<<"Book is successfully borrowed.."<<endl;
    }
    else{
        cout<<"Book is not available ..."<<endl;
    }
}

void BorrowUI::ReturnBook(string username){
    borrowb.ReturnBook(username);
}

void BorrowUI::notification(string username){

borrowb.notification(username);

}










