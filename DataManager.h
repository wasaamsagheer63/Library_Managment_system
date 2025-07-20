#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include<string>
using namespace std;

class DataManager{
    public:
    bool saveData(string username, string password, string role);
    bool checkCriedentials(string username, string password, string role);
};
#endif