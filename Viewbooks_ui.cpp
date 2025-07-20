#include"Viewbooks_ui.h"
#include"Authentication/Ui_Layer/UIManager.h"





void StudentBookUI::showBooks(){
   showBook.showBooks();
  
}

void StudentBookUI::Borrow(){
    borrowUI.BorrowBookUI(username);
}


void StudentBookUI::ReturnBook(){
    borrowUI.ReturnBook(username);
}

void StudentBookUI::notification(){
    borrowUI.notification(username);

}
void StudentBookUI::logout(){
    uiParent->run();

}

void StudentBookUI::Functionalities(string uname){
    
    username = uname;
    int choice;
   

    do{
        
    cout<<"1. SHOW BOOKS DETAIL "<<endl;
    cout<<"2. Borrow Books :"<<endl;
    cout<<"3. Return Book :"<<endl;
    cout<<"4. Notification :"<<endl;
    cout<<"5. Logout: "<<endl;
    cout<<"6. Exit : "<<endl;
     cout<<"Choose what you want to do : ";
     cin>>choice;
    cout<<endl;

    switch(choice){
        
        case 1:showBooks(); break;
        case 2:Borrow();break;
        case 3:ReturnBook();break;
        case 4:notification();break;
        case 5:logout();return;
        case 6:break;
        default: cout<<"Invalid choice"<<endl;
    }
  } while(choice != 6);
}