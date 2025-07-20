#ifndef ADD_BOOKS_H
#define ADD_BOOKS_H
#include<string>
#include<algorithm>
#include <iostream>
#include<fstream>
#include<vector>
#include<limits>
using namespace std;

class Book{
    public:
    int book_id;
    int book_quantity;
    string book_name;
    string book_auther;
    
    void deleteBooks();
    void EditBooks();
    void addBook(Book book);
    void fetchBook();
    Book(int book_id, string book_name, string book_auther, int quantity);
    int getMaxId();
    Book(){}
};

#endif
