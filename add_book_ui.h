#ifndef ADD_BOOK_UI_H
#define ADD_BOOK_UI_H

#include"Admin/Book/Bussiness_layer/add_book.h"

class UI;
class AddBookUI{
    
    AddBook addB;
    bool running;
    UI* uiParent;
    public: 
    void addBookV();
    void showBooks();
    void Functionalities();
    void DeleteBooks();
    void EditBooks();
    void showOrders();
    void fine();
    void logout();
    AddBookUI() : uiParent(nullptr){};
    void setParent(UI* parent){uiParent = parent;}

};


#endif