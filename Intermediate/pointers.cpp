#include<iostream>
using namespace std;

int main(){

    int a = 34 ;
    int* pointer; // * is a de-refrencing pointer
    pointer = &a; // &(ampersand) means address of
    cout << "The Value of a is " << a << endl;
    cout << "The Value of a is " << *pointer << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << pointer << endl;
    
    // float a = 34.44 ;
    // float* pointer;
    // pointer = &a; 
    // cout << "The Value of a is " << a << endl;
    // cout << "The Value of a is " << *pointer << endl;
    // cout << "The address of a is " << &a << endl;
    // cout << "The address of a is " << pointer << endl;
    
    
    return 0;
}