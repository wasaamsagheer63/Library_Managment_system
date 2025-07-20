#ifndef UIMANAGER_H
#define UIMANAGER_H


#include "Authentication/Bussiness_layer/AuthService.h"
#include<string>
#include<limits>
using namespace std;
class AddBookUI;
class StudentBookUI;



class UI{
    AuthServices auth;
    bool running;
    AddBookUI* addBookUI;
    StudentBookUI* studentBookUI;
    void showAdminPanel();
    void showStudentPanel(string& username);
    void login();
    void signUp();
    void admin_Login();

public:
void run();
void stop(){ running = false;};
UI();
~UI();
};

#endif 