#ifndef BORROW_H
#define BORROW_H
#include<string>
#include<algorithm>
using namespace std;

class BorrowAD{
    public:
    int borrow_id;
    string username;
    string book_name;
    string date;
    string time;
    
    void showOrders();
    BorrowAD(){}
};

#endif
