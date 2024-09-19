#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;

    int row = 1;

    while(row <= n){

        // Print the spaces 
        int space = n - row;
        while(space){
            cout <<" ";
            space = space - 1;
        }

        // Print the stars
        int col = 1;
        while(col <= row){
            cout <<"*";
            col = col + 1;
        }

        cout << endl;
        row= row + 1;
    }

    return 0;
}


/*

Input : 5

Output : 

    *
   **
  ***
 ****
*****

*/