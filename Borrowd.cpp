#include "Borrowd.h"
#include "..\..\..\Admin\Book\Data_Layer\add_book.h"
#include <iostream>
#include <string>
#include<fstream>
#include<vector>


using namespace std;

BorrowD::BorrowD(string name, string book_name,string date,string time){

this->personName = name;
this->book_name = book_name;
this->time = time;
this->date = date;
}

BorrowD::BorrowD(int id, string name, string book_name,string date,string time){

this->id=id;    
this->personName = name;
this->book_name = book_name;
this->time = time;
this->date = date;
}

void BorrowD::BorrowBook(BorrowD book){
    ifstream inFile("Borrow.txt");

     int maxId = 0;
     int nid;
     string name,bookName,bookDate,bookTime;
    while(inFile >> nid >> name >> bookName >> bookDate >> bookTime){
       maxId = max(maxId,nid);
    } 
    maxId++;
    inFile.close();
    book.id=maxId;
ofstream outFile("Borrow.txt", ios::app);
if(outFile.is_open()){
    outFile<<book.id<<" "<<book.personName<<" "<<book.book_name<<" "<<book.date<<" "<<book.time<<endl;
    outFile.close();

}
else{
    cout<<" Borrow.txt is not opened "<<endl;
    }
}

void BorrowD::ReturnBook(string username){
    ifstream inFile("Borrow.txt");
     int nid;
     string name,bookName,bookDate,bookTime;
    if(inFile.is_open()){
        while(inFile >> nid >> name >> bookName >> bookDate >> bookTime){
            if(username == name){
                cout<<"ID: "<< nid <<"   | Student Name : "<<name<<"  | Book Name: "<<bookName<<"   |  Date: "<<bookDate<<"   | Time: "<<bookTime<<endl;
            }

        }
        inFile.close();
    }

    cout<<"Enter Book ID You want to return : ";
    int returnbookID;
    bool exist = false;
    cin>> returnbookID;

     vector<BorrowD> BorrowedBooks;
    ifstream inFile2("Borrow.txt");
    int nnid;
     string nname,nbookName,nbookDate,nbookTime;
    if(inFile2.is_open()){
        while(inFile2 >> nnid >> nname >> nbookName >> nbookDate >> nbookTime){
        if(returnbookID != nnid){
            BorrowedBooks.emplace_back(nnid,nname,nbookName,nbookDate,nbookTime);
        }
        else {
                        exist = true;
             cout<<nbookName<<" is returned .."<<endl;
        }
    }
    if(!exist){
        cout<<"There is no book to return .."<<endl;
    }
    inFile2.close();
}

ofstream outFile("Borrow.txt");
if(outFile.is_open()){
    for(BorrowD& remainingBook:BorrowedBooks){
        outFile << remainingBook.id <<" "<< remainingBook.personName <<" "<< remainingBook.book_name <<" "<<remainingBook.date <<" "<< remainingBook.time << endl; 
    }
    outFile.close();
}


ifstream inFile3("book.txt");
        vector<Book> book;
        int id,quan;
        string namep,auther;
        if(inFile3.is_open()){
            while(inFile3 >> id >> namep >> auther >> quan){
                if(nbookName == namep){
                    quan++;
                    book.emplace_back(id,namep,auther,quan);
                }
                else{
                 book.emplace_back(id,namep,auther,quan);   
                }
            }
        }else{
            cout<<"You are not able to borrow"<<endl;
        }
        inFile3.close();

       ofstream outFile2("book.txt");
if(outFile2.is_open()){
    for(Book& afterBorrowBook:book){
        outFile2 << afterBorrowBook.book_id <<" "<< afterBorrowBook.book_name <<" "<< afterBorrowBook.book_auther<<" "<<afterBorrowBook.book_quantity << endl; 
    }
    outFile2.close();
}





}

void BorrowD::notification(string username){

    ifstream inFile("Fine.txt");
if(inFile.is_open()){
     int idf;
     bool found = false;
     string name,book;
     double fine;

    while(inFile >> idf >> name >> book >> fine){

    if(name == username){
        cout<< "You Do not returned this "<<book<<" on Given Time for which you have to pay "<<fine<<"RS as fine"<<endl;
        found = true;
    }
    
    }
    if(!found){
        cout<<"No any notification yet ...."<<endl;
    } 
    inFile.close();
}
else{
    cout<<"Unable to open the file File.txt"<<endl;
}
}
    




