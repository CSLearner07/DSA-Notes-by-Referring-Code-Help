#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;

    int i  = 1 ;
    char value = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            
            cout << value << " ";
            value++;
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
F G H I J
K L M N O
P Q R S T
U V W X Y

*/