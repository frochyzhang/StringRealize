#include <iostream>
#include"stringrealize.h"

using namespace std;

int main()
{
    MyString s1("Hello, "),s2("World!\n");
    MyString s3=s1+s2;
    cout<<s3<<endl;
    cin>>s1>>s2;
    s3=s1+s2;
    cout<<s3<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
