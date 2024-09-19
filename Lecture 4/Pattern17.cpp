#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;

    int row = 1;

    while(row <= n){

        // Print the space ( 1st Triangle)
        int space = n - row;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // Print 2nd Triangle
        int j = 1;
        while(j <= row){
            cout << j;
            j = j + 1;
        }

        // Print 3rd Triangle

        int start = row - 1;
        while(start){
            cout << start ;
            start = start - 1;
        }


        cout << endl;
        row = row + 1;
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