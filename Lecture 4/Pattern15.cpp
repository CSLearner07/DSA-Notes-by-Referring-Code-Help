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
        char start = 'A' + n - i;
        while(j<=i){
           
            cout << start << " ";
            start++;
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

E
D E
C D E
B C D E
A B C D E

*/