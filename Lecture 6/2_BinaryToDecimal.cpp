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

Input : 101

Output : The Binary number for 101 is : 5

*/


