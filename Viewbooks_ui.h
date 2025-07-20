#ifndef VIEWBOOKS_UI_H
#define VIEWBOOKS_UI_H

#include"Student/Book/Bussiness_layer/Viewbooks.h"
#include"Student/Borrow/UI_Layer/BorrowUi.h"
#include<iostream>
#include<string>
using namespace std;
class UI;
class StudentBookUI{
    UI* uiParent;
    ShowBook showBook;
    BorrowUI borrowUI;
   
    string username;
    public:
    void showBooks();
    void Borrow();
    void ReturnBook();
    void notification();
    void logout();
    void Functionalities(string username);
    StudentBookUI() : uiParent(nullptr){};
    void setParent(UI* parent){ uiParent = parent;}
};


#endif