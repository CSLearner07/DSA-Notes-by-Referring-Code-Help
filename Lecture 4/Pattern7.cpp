#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;

    int row  = 1 ;
    
    while(row<=n){
        int col = 1;
        int value = row;
        while(col<=row){
            cout << " " << value << " " ;
              value++;
            col  = col + 1 ;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}


/*

Input : 5

Output : 

 1
 2  3
 3  4  5
 4  5  6  7
 5  6  7  8  9

*/