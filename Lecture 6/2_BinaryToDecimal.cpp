#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int dup = n;
    
    int i = 0, ans = 0;

    while( n != 0){
        int digit = n % 10;

        if (digit == 1){
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;
    }
    cout << "The Decimal number of " << dup << " is : " << ans << endl;
}


/*

Input : 5

Output : The Binary number for 5 is : 101

*/


//If you give input out of range then it will print any wrong value that is not a binary example 10000 is out of range 
//Therefore logic is correct just be careful for range
