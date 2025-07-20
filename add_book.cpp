#include "add_book.h"
#include <iostream>
#include <string>
#include<fstream>
#include<vector>
#include<limits>

using namespace std;

void Book::addBook(Book book){
ofstream file("book.txt", ios::app);
if(file.is_open()){
    file<<book.book_id<<" "<<book.book_name<<" "<<book.book_auther<<" "<<book.book_quantity<<endl;
    cout<<"Book added successfully"<<endl;
    file.close();

}
else{
    cout<<" File is not opened "<<endl;
}
}

 Book::Book(int book_id, string book_name, string book_auther, int quantity){
         this->book_id = book_id;
         this->book_name = book_name;
         this->book_auther = book_auther;
         this->book_quantity= quantity;
        
}

void Book::fetchBook(){
    ifstream file("book.txt");
    if(file.is_open()){
   while(file >> book_id >> book_name >> book_auther >> book_quantity ){
    if(book_quantity <= 0){
        cout<<"ID: "<<book_id<<" | Book Name: "<<book_name<<"( Empty )"<<endl;
    }
    else{
     cout<<"ID: "<<book_id<<" | Book Name: "<<book_name<<" | Book Author: "<<book_auther<<"  | Quantity: "<<book_quantity<<endl;
     cout<<"..................."<<endl;
    }
   }
    }
 }

 int Book::getMaxId(){
    ifstream file("book.txt");

     int maxId = 0;
     int id,quantity;
     string name,auth;
    
    while(file >> id >> name >> auth >> quantity ){
       maxId = max(maxId,id);
    } 
    file.close();
    return maxId;
 }

 void Book::deleteBooks(){
    fetchBook();
        int deleting_book_ID;

    while(true){
    cout<<"Enter book ID You want to delete :";
    cin>>deleting_book_ID;

     if(!cin.fail()){break;}
     cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

};
      
    vector<Book> books;
    ifstream inFile("book.txt");
    bool exist = false;
    int Id,quantity;
    string bookName,auther;
   
    if(inFile.is_open()){
    while(inFile >> Id >> bookName >> auther >> quantity){
        if(deleting_book_ID != Id){
            books.emplace_back(Id,bookName,auther,quantity);
        }
        else {
            exist = true;
            cout<<bookName<<" is deleted .."<<endl;
        }
       

    }
}
if(!exist){
    cout<<"book not exist"<<endl;
}
inFile.close();

ofstream outFile("book.txt");
if(outFile.is_open()){
    for(Book& afterDelteBook:books){
        outFile << afterDelteBook.book_id <<" "<< afterDelteBook.book_name <<" "<< afterDelteBook.book_auther<<" "<<afterDelteBook.book_quantity << endl; 
    }
    outFile.close();
}
 }
 


 void Book::EditBooks(){
    bool foundFlag = false ;
    fetchBook();
    vector<Book> books;
    int edit_id;
    while(true){
    cout<<"Which Book you want to Edit . Put its ID :";
    cin>>edit_id;
    

    if(!cin.fail()){break;}
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }

 ifstream inFile("book.txt");

bool exist = false;
    if(inFile.is_open()){
        int id;
        string name,auther;
     
        while(inFile >> id >> name >> auther){
            if(edit_id == id){
                exist = true;
            }
            
        }
        if(!exist){
            cout<<"Book is not Presnet"<<endl;
            return;
        }
    }




    string new_name,new_auther;

   while(true){ 
    
    cout<<"Enter Book updated name: ";
           cin>>new_name;
    if(!cin.fail()){break;}
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');     
}



    cout<<"Enter Book Auther Updated name: ";
    cin>>new_auther;
int quant;
    while(true){
    cout<<"Updated quantity :";
    cin>>quant;
    

    if(!cin.fail()){break;}
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }

    

   
    ifstream inFile2("book.txt");


    if(inFile2.is_open()){
        int id,quan;
        string name,auther;
       
        while(inFile2 >> id >> name >> auther >> quan ){
            if(edit_id == id){
                books.emplace_back(id,new_name,new_auther,quant);
                foundFlag = true;
                cout<<"......Book Detail is Edited Successfully....."<<endl;
            }
            else{
                 books.emplace_back(id,name,auther,quan);
            }
        }
    }

    inFile2.close();
if(!foundFlag){
    cout <<"Book of this Id: "<<edit_id<<" is not found .."<<endl;
    return;
}
    ofstream outFile("book.txt");
    if(outFile.is_open()){
        for(Book& book:books){
            outFile << book.book_id<<" " << book.book_name<<" "<< book.book_auther<<" "<<book.book_quantity<<endl;
        }
        outFile.close();
    }
 }

 