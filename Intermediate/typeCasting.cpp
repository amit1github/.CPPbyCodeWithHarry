#include<iostream>
#include<string.h>
using namespace std;

int main(){

    // int a = 200; 
    // float b = 87.94; //By the rule of typecasting number after points will not shown.
    // cout << (float) a/3 <<endl;

    // cout <<(int) b;

    string name = "Amit";
    cout << "The name is "<< name << endl;
    
    // Some IMP. Functions for now length(), substr()
    cout << "Length of name is "<< name.length() << endl;
    
    //this substr is not array. just subtracting a string function.
    // SUBSTR means SUBTRACTING A STRING from the number given in parentheses.
    cout << "The name is "<< name.substr(2) << endl;
    cout << "The name is "<< name.substr(1,2) << endl;    

    return 0;
};
