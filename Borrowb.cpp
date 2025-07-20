#include "Borrowb.h"
#include<fstream>


bool BorrowB::borrowbookb(string username, int book_ID, string date, string time){
     string book_searched = (bookavailable(book_ID));
     if(book_searched != "Not_found" && book_searched !="Sorry_You_cannot_Borrow_book"){
     BorrowD borrowd(username,book_searched,date,time);
     borrowd.BorrowBook(borrowd);
     return true;
     }
     else {
          return false;
     }
}
    
     

string BorrowB::bookavailable(int book_ID){
     ifstream inFile("book.txt");
     int find_ID;
     string book_name,book_auth,quant;
     if(inFile.is_open()){
          while(inFile >> find_ID >> book_name >> book_auth >> quant){
              if(book_ID == find_ID){
               return book_name;
              }
               }
               inFile.close();
               return "Not_found";
          }
          
     inFile.close();
     return "Sorry_You_cannot_Borrow_book";
   
}


void BorrowB::ReturnBook(string username){
borrowd.ReturnBook(username);
}

void BorrowB::notification(string username){

     borrowd.notification(username);
}