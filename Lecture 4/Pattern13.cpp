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
        while(j<=i){
            char ch = 'A' + i - 1;
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

A
B B
C C C
D D D D
E E E E E

*/