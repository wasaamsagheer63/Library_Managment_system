#include "UIManager.h"
#include "Admin/Book/UI_Layer/add_book_ui.h"
#include "Student/Book/UI_Layer/Viewbooks_ui.h"


void UI::showAdminPanel(){
cout<<"Admin side is opened"<<endl;
addBookUI->Functionalities();
}


UI::UI(){
    addBookUI = new AddBookUI();
    studentBookUI = new StudentBookUI();

    addBookUI -> setParent(this);
    studentBookUI -> setParent(this);
}

UI::~UI(){
    delete addBookUI;
    delete studentBookUI;
}

void UI::showStudentPanel(string& username){
    cout<<"Student "<<username<<" Pannel Is Open "<<endl;
    studentBookUI->Functionalities(username);
}

void UI::login(){
    cout<<"Enter Student Username: ";
    string username;
    cin>>username;
    cout<<endl;

    cout<<"Enter Student Password: ";
    string password;
    cin>>password;
    cout<<endl;
    string student = "Student";
    if(!password.empty() && !username.empty()){
   if(auth.login(username, password, student)){
       showStudentPanel(username);
    }
else{
    cout<<"Sign in Failed"<<endl;
 }
}else{
    cout<<"Please filled fileds properly"<<endl;
}
}

void UI::signUp(){
    cout<<"Enter Student Username: ";
    string username;
    cin>>username;
    cout<<endl;

    cout<<"Enter Student Password: ";
    string password;
    cin>>password;
    cout<<endl;
    if(!password.empty() && !username.empty()){
    if(!auth.registerStudent(username, password)){
         cout<<"Try Again .."<<endl;
         
    }
    else{
        showStudentPanel(username);
    }
    }
    else{
        cout<<" Please enter fields "<<endl;
    
    }
}

void UI::admin_Login(){
    cout<<"Enter Admin Username: ";
    string username;
    cin>>username;
    cout<<endl;

    cout<<"Enter Admin Password: ";
    string password;
    cin>>password;
    cout<<endl;
if(auth.Admin_login(username, password)){
showAdminPanel();
}
else{
    cout<<"(Your Credentials are not True) "<<endl;
    cout<<" Try Again "<<endl;

}
}

void UI::run(){
    running = true;
    while(running){
    int choice;
    cout<<"1. Admin Login:"<<endl;
    cout<<"2. Student Login"<<endl;
    cout<<"3. Student SignUp"<<endl;
    cout<<"4. close or End"<<endl;

    cout<<"Enter choice :";
    cin>>choice;
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }

{
   switch (choice)
    {
    case 1:admin_Login();break;
    case 2:login();break;
    case 3:signUp();break;
    case 4:stop();return;
    default:
    cout<<"Enter valid input between 1-4"<<endl;
    break;
    }

}
    }

    
}



