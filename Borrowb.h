#ifndef BORROWB_H
#define BORROWB_H
#include "Student/Borrow/Data_Layer/Borrowd.h"
#include<iostream>
#include<string>
using namespace std;

class BorrowB{
   
public:
   BorrowD borrowd;
   bool borrowbookb(string username, int book_ID,string date, string time);
   string bookavailable(int book_ID);
   void ReturnBook(string username);
   void notification(string username);
   BorrowB(){}
    
};


#endif