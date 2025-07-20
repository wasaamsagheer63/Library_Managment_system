#include"fined.h"
void FineD::IssueFine(){
    int borrow_id;
    string username,book_name,date,time;

     ifstream inFile("Borrow.txt");
    if(inFile.is_open()){
        while(inFile >> borrow_id >> username >> book_name >> date >> time){
        cout<<"ID: "<<borrow_id<<"   | Student Name : "<<username<<"  | Book Name: "<<book_name<<"   |  Borrow Date: "<<date<<"   | Due Date: "<<time<<endl;
        cout<<"........................................"<<endl;
    }
       inFile.close();
}

 ifstream inFile2("Fine.txt");

     int maxId = 0;
     int id;
     string name,book;
     int fine;
    while(inFile2 >> id >> name >> book >> fine){
       maxId = max(maxId,id);
    } 
    inFile2.close();


cout<<"Per day Fine is 20 Rupes "<<endl;

 int student_id;
 bool data = false;
 string un,bn;

while(!data){
cout<<"Enter ID for Fine: ";
cin>>student_id;



  ifstream inFile3("Borrow.txt");

    if(inFile3.is_open()){
        while(inFile3 >> borrow_id >> username >> book_name >> date >> time){
       if(student_id == borrow_id){
        un=username;
        bn=book_name;
        data = true;
        break;
       }
      
    }
    
    if(!data){
         cout<<"Please verify your data .. your data is not correct"<<endl;
    }
    inFile3.close();
    
}
}


cout<<"Enter Days that are overdue: ";
int days = 0;
cin>>days;

int fine_charges;
fine_charges = 20*days;
cout<<"Notification is successfully transfered"<<endl;



idf = maxId+1;

ofstream outFile("Fine.txt",ios::app);
if(outFile.is_open()){
    outFile << idf << " " << un << " " << bn << " " << fine_charges << endl;
}
outFile.close();
}