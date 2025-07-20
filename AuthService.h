#ifndef AUTHSERVICE_H
#define AUTHSERVICE_H
#include<iostream>

#include"Authentication/Data_Layer/DataManager.h"
class AuthServices{
    DataManager dataManager;
public:
    bool registerStudent(string username, string password );
    bool login(string username, string password, string role);
    bool Admin_login(string username, string password);
};

#endif