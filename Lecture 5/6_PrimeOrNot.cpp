#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of n : ";
    cin >> n;

    bool isPrime = 1;

    for (int i = 2 ; i <n; i++){
       
       if(n % i == 0 ){
        isPrime = 0;
        break;
       }
    }

    if(isPrime == 0){
        cout << n << " is not Prime Number" << endl;
    }
    else{
        cout << n << " is a Prime Number" << endl;
    }

    return 0;
}

/*

Input : 5

Output : 5 is a Prime Number

*/