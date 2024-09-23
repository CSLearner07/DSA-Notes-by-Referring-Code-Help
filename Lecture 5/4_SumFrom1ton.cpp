#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of n : " << endl;
    cin >> n;
    int sum = 0;



    for (int i = 1 ; i <= n; i++){
        sum += i ; 
    }
    cout << "The sum of n numbers : " << sum << endl;
    return 0;
}

/*

Input : 5

Output : The sum of n numbers : 15

*/