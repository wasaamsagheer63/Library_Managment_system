#ifndef BORROWUI_H
#define BORROWUI_H

#include"Student/Borrow/Bussiness_layer/Borrowb.h"
#include"Student/Book/Data_Layer/Viewboooks.h"
#include<iostream>
#include<string>
using namespace std;

class BorrowUI{ 
    BorrowB borrowb;
    BookView bookView;
    public:
    void notification(string username);
    void ReturnBook(string username);
    void BorrowBookUI(string username);
    BorrowUI(){}
};


#endif