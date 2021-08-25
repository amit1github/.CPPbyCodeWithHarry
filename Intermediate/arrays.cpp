#include<iostream>
using namespace std;

int main(){
    
    // int arr[] = {1, 3, 6};
    // //Array Index   0, 1, 2
    // cout << arr[0];

    //One - Dimensional array.
    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Marks of "<< i <<"th student is "<<marks[i]<<endl;
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Marks of "<< i <<"th student is "<<marks[i]<<endl;
    // }

    // Two Dimensional array
    int arr[4] [3] = {{ 1, 3, 6 } , { 2, 4, 8 }};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at "<< i <<","<< j << " is " <<arr[i][j] << endl;
        }
    };
    
    return 0;
};