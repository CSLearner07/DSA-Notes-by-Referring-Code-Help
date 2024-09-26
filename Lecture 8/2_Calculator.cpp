#include <iostream>
using namespace std;

int main(){

    int a ;
    cout << "Enter the value of a : ";
    cin >> a;

    int b ;
    cout << "Enter the value of b : ";
    cin >> b;

    char op;
    cout <<"Enter the operation you want to perform (+, -, *, /, %) : ";
    cin >> op;

    switch (op)
    {
    case '+' : cout << a + b;
        break;
    case '-' : cout <<a - b;
        break;
    case '*' : cout <<a * b;
        break;
    case '/' : cout <<a / b;
        break;
    case '%' : cout <<a % b;
        break;
    default:
        cout << "Please Enter the valid operations like +, -, /, %";
        break;
    }

    return 0;
}


/*
Input : 5
Output : The value you Entered is : 5
*/

//In Switch statement nested switch is possible but it is not needed most of the time