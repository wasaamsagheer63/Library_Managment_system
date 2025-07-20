#ifndef BORROWD_H
#define BORROWD_H

#include<string>
#include<algorithm>
using namespace std;

class BorrowD{
    public:
    int id;
    string personName;
    string book_name;
    string date;
    string time;
    void BorrowBook(BorrowD book);
    void ReturnBook(string username);
    void notification(string username);
    BorrowD(string name, string book_name,string date, string time);
    BorrowD(int id, string name, string book_name,string date, string time);
    BorrowD(){};
};

#endif
