#include"AuthService.h"

bool AuthServices::registerStudent(string username, string password){
    string student = "Student";
    if(dataManager.saveData(username, password, student)){
    return true;
    }
    else {
        cout<<username<<" is not sign up "<<endl;
        return false;
    }
}

bool AuthServices::login(string username, string password, string role){
    return dataManager.checkCriedentials(username, password, role);
}

bool AuthServices::Admin_login(string username, string password){
    if(username == "Admin" && password == "123456789"){
        cout<<"Admin is successfully login"<<endl;
        return true;
    }
    else 
    return false;
}