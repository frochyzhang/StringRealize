#include"stringrealize.h"
#include <iostream>
using namespace std;

MyString::MyString(const char *str)
{
    if(str==NULL)
    {
        len=0;
        data=new char[1];
        *data='\0';
    }
    else
    {
        len=strlen(str);
        data=new char[len+1];
        strcpy(data,str);
    }
}

MyString::MyString(const MyString &str)
{
    if(str.data==NULL)
    {
        len=0;
        data=new char[1];
        *data='\0';
    }
    else
    {
        len=str.len;
        data=new char[len+1];
        strcpy(data,str.data);
    }
}

MyString::~MyString()
{
    delete[] data;
}

MyString MyString::operator+(const MyString &str)
{
    MyString tmp;
    tmp.len=len+str.len;
    tmp.data=new char[tmp.len+1];
    strcpy(tmp.data,data);
    strcat(tmp.data,str.data);
    return tmp;
}

MyString &MyString::operator=(const MyString &str)
{
    if(data==str.data)
        return *this;
    else
    {
        delete[] data;
        len=str.len;
        data=new char[len+1];
        strcpy(data,str.data);
        return *this;
    }
}

istream& operator>> (istream &in, MyString &str)
{
    in>>str.data;
    return in;
}

ostream &operator<<(ostream &out, const MyString &str)
{
    out<<str.data;
    return out;
}
