#include "Borrow.h"
#include<fstream>
#include<iostream>
using namespace std;

void BorrowAD::showOrders(){
    ifstream inFile("Borrow.txt");
    if(inFile.is_open()){
        while(inFile >> borrow_id >> username >> book_name >> date >> time){
        cout<<"ID: "<<borrow_id<<"   | Student Name : "<<username<<"  | Book Name: "<<book_name<<"   |  Borrow Date: "<<date<<"   | Due Date: "<<time<<endl;
    }
       inFile.close();

   }
}