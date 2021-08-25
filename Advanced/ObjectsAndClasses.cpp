#include<iostream>
using namespace std;

class Employee{
    public: // Access Specifiers
        string name;
        int salary;

    // Method
    void printDetails(){
        cout << "The name of our first employee is "<< this->name 
        <<" and his salary is "<<this->salary <<endl;
    }
};

int main(){

    Employee amit;
    amit.name = "amit";
    amit.salary = 100;
    amit.printDetails();

    return 0;
};

/* Note:  
 classes name : classes first letter will always be in capital letter.
 Public, Private, Protected : These all are access modifiers.
 camelcase : camelCase 

about (this) :

(this) is the type to access a object of function we are talking or the current program or function is built for.

this" -> " : member-identifier

The expression ( *this ) is commonly used to return the current object from a member function.

The this pointer is a pointer accessible only within the nonstatic member 
functions of a class, struct, or union type. It points to the object for 
which the member function is called. Static member functions don't have a this pointer.

Occasionally, the this pointer is used directly — for example, to manipulate 
self-referential data structures, where the address of the current object is required.

 */