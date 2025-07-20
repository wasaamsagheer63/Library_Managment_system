#include "Viewboooks.h"
#include <iostream>
#include <string>
#include<fstream>
#include<vector>

using namespace std;

void BookView::fetchBook(){
    ifstream file("book.txt");
    if(file.is_open()){
   while(file >> book_id >> book_name >> book_auther >> quantity ){
      if(quantity > 0){
         cout<<"ID: "<<book_id<<" | Book Name: "<<book_name<<" | Book Author: "<<book_auther<<"  | Copies Available : "<<quantity<<endl;
     cout<<"..................."<<endl;
    }
    
   }
    }
 }