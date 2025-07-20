#include"DataManager.h"
#include<iostream>
#include<fstream>
using namespace std;

bool DataManager::saveData(string username, string password, string role){
ofstream file("user.txt",ios::app);
if(file.is_open()){
    file<<username<<" "<<password<<" "<<role<<endl;
    file.close();
    return true;
}
else{
    cout<<"File is not opened"<<endl;
    return false;
}
}

bool DataManager::checkCriedentials(string username, string password, string role){
    ifstream inFile("user.txt");
    bool userfound = false;
if(inFile.is_open()){
    string u,p,r;
    while(inFile >> u >> p >> r ){
        if(u==username && p==password && r == role){
            userfound = true;
            inFile.close();
            return true;
        }
        }
}
if(!userfound){
    cout<<username<<" is not registered "<<endl;
}
   else{
    cout<<"File is not opened .."<<endl;
}
    inFile.close();
    return false;
}