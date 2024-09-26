#include <iostream>
using namespace std;

int main(){

    int n ;
    cout << "Enter the value of n from 1 to 5 : ";
    cin >> n;

    switch (n)
    {
    case 1 : cout << "The value you Entered is : 1";
        break;
    case 2 : cout <<"The value you Entered is : 2";
        break;
    case 3 : cout <<"The value you Entered is : 3";
        break;
    case 4 : cout <<"The value you Entered is : 4";
        break;
    case 5 : cout <<"The value you Entered is : 5";
        break;
    default:
        cout << "The value of n that you entered is not in the range of 1 to 5";
        break;
    }

    return 0;
}


/*
Input : 5
Output : The value you Entered is : 5

*/