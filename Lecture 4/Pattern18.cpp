#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;

     int row = 1;
    while(row <= n){
        // Print numbers in increasing order
        int i = 1;
        while(i <= n - row + 1){
            cout << i;
            i++;
        }

        // Print stars
        int star = 1;
        while(star <= 2 * (row - 1)){
            cout << "*";
            star++;
        }

        // Print numbers in decreasing order
        i = n - row + 1;
        while(i >= 1){
            cout << i;
            i--;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/*

Input : 5

Output : 

1234554321
1234**4321
123****321
12******21
1********1

*/