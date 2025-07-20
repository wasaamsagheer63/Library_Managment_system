#include"add_book_ui.h"
#include"Authentication/Ui_Layer/UIManager.h"
#include<limits>


void AddBookUI::addBookV(){
    
    string name ;
    while(true){
       
        cout<<"Enter book name : ";
    cin>>name;
    if(!cin.fail()){break;}
     cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

};

    string auth;
    while(true){
cout<<"Enter book Auther : ";
        cin>>auth;

         if(!cin.fail()){break;}
     cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    };

      int quantity;
    while(true){
cout<<"Enter book Quantity : ";
        cin>>quantity;

         if(!cin.fail()){break;}
     cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    };

   

    int counter = addB.getMaxId();
     counter++;
    addB.addBook(counter, name, auth,quantity);
    Functionalities();
   

}

void AddBookUI::showOrders(){
    addB.ShowOrders();
       Functionalities();

}

void AddBookUI::showBooks(){
   addB.showBooks();
       Functionalities();

}
void AddBookUI::DeleteBooks(){
    addB.deleteBooks();
       Functionalities();

}

void AddBookUI::EditBooks(){
    addB.EditBooks();
       Functionalities();

}

void AddBookUI::fine(){
    addB.fine();
       Functionalities();

}

void AddBookUI::logout(){
    uiParent->run();
}


void AddBookUI::Functionalities(){
    running = true;
    while(running){
    int choice;
    cout<<"1. ADD BOOK "<<endl;
    cout<<"2. SHOW BOOKS DETAIL "<<endl;
    cout<<"3. Delete Books "<<endl;
    cout<<"4. Edit Book "<<endl;
    cout<<"5. View Orders "<<endl;
    cout<<"6. Issue Fine for Not returning books: "<<endl;
    cout<<"7. Logout :"<<endl;
    
     cout<<"Choose what you want to do : ";
   
        cin>>choice;
        if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
     
    
    

    switch(choice){
        case 1:addBookV();break;
        case 2:showBooks(); break;
        case 3:DeleteBooks(); break;
        case 4:EditBooks(); break;
        case 5:showOrders();break;
        case 6:fine();break;
        case 7:logout();return;
      
        default:cout<<"Invalid input ... ( Please enter 1-7 )"<<endl;
        break;
        
    }
        
    }

}
