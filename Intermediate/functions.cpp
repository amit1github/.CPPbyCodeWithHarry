#include<iostream>
using namespace std;

int add(int a, int b) {
    int c;
    c = a + b;
    return c;
};

int main(){
    int a, b;
    cout<<"first number: ";
    cin >> a;
    cout << "second number: ";
    cin >>b;

    cout<<"The function returned "<<add(a,b);
    return 0;
}