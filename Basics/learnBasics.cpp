#include<iostream> // Pre-Processor command
using namespace std; // due to it no need to write namespace std::

int main(){ // program which will first execute will written in main()
    
    // cout << "Hello  World Harry" << endl;
    // cout << "Hello  World Harry potter";

    // int a, b;  //int can be between 16-32 bits.
    // short num = 9;  //short at least 16 bits.
    // cout << num <<endl;

    // int marksInMaths=84;  //camelCase Notation
    // cout<<"The marks in maths is " <<marksInMaths <<endl;

    // TYPES OF INTEGERS.
    // vary according to size of integers like 16, 32, 64 bits 
    //put ( const ) if don't want to change the value
    
    // short a;
    // int const b = 32;
    // cout << b <<endl;
    // long c;
    // long long d;
    // float const score = 45.32;  
    // double score2 = 45.332;
    // long double score3 = 45.332;
    // cout << "The Score is " <<score;

    // Taking USER INPUT
    // string x,y,z;
    // cout << "first name: ";
    // cin >> x;
    // cout << "second name: ";
    // cin >> y;
    // cout << "full name is: " << x << " " << y;

    //Learn more about Operators by search
    //Operators
    int a,b;
    cout << "first num: ";
    cin >> a;
    cout << "Second num: ";
    cin >> b;
    cout<<"a + b is " << a + b << endl;
    cout<<"a - b is " << a - b << endl;
    cout<<"a * b is " << a * b << endl;
    cout<<"a / b is " << (float) a / b << endl; //Typecasting

    return 0;
};

/* Note: 
    - Use ( g++ main.cpp ) to compile and .\a.exe to run
    - if previous output shows in terminal instead of updated 
    output means the current program hasn't been updated. 
*/