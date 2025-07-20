#ifndef FINED_H
#define FINED_H

#include<iostream>
#include<string>
#include<fstream>
#include"limits"

using namespace std;

class FineD{
public:
int idf;
string personNameF;
string bookNameF;
FineD(int idf, string personNameF, string bookNameF);
void IssueFine();
FineD(){};
};

#endif