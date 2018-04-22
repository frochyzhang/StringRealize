#ifndef STRINGREALIZE_H
#define STRINGREALIZE_H

#include<string.h>
#include<iostream>
using namespace std;

class MyString
{
    friend istream& operator >>(istream& in,MyString& str);
    friend ostream& operator <<(ostream& out,const MyString& str);
public:
    MyString(const char* str=NULL);
    MyString(const MyString& str);
    ~MyString();
    MyString operator+(const MyString& str);
    MyString& operator=(const MyString& str);
private:
    char* data;
    int len;
};

#endif // STRINGREALIZE_H
