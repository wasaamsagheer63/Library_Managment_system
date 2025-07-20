#ifndef VIEWBOOOKS_H
#define VIEWBOOOKS_H
#include<string>
#include<algorithm>
using namespace std;

class BookView{
    public:
    int book_id;
    string book_name;
    string book_auther;
    int quantity;
    void fetchBook();
    BookView(){}
};

#endif
