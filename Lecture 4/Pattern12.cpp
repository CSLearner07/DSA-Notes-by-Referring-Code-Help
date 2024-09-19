#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;

    int i  = 1 ;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j  = j + 1 ;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}


/*

Input : 5

Output : 

A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

*/