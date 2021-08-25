// On line 33 Inheritance started

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    // constructor
    Employee(string con_name, int con_salary, int sec_pass)
    {
        this->name = con_name;
        this->salary = con_salary;
        this->secretPassword = sec_pass;
    }

    // method
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name
             << " and his salary is " << this->salary << endl;
    }

    //method for private
    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

// INHERITANCE
class Programmer : public Employee
{
public:
    int errors;
};

int main()
{

    Employee amit("amit constructor", 344, 123456);
    amit.printDetails();
    amit.getSecretPassword();
    //cout<<amit.secretPassword;

    return 0;
};
