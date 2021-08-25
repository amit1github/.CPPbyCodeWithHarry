#include<iostream>
using namespace std;

class Employee{
    public: 
        string name;
        int salary;

    // constructor
    Employee(string con_name, int con_salary)
    {
        this->name = con_name;
        this->salary = con_salary;
    }

    // method
    void printDetails(){
        cout << "The name of our first employee is "<< this->name 
        <<" and his salary is "<<this->salary <<endl;
    }
};

int main(){

    //same way of syntax for constructor as you have write in class
    Employee amit("amit constructor", 344); 
    amit.printDetails();

    return 0;
};

/* NOTE: 
    The 
 */