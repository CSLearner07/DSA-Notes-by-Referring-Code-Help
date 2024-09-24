#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int dup = n;

    int ans = 0;
    int i = 1;  // Use a multiplier instead of pow

    while(n != 0){
        int bit = n & 1;  // Get the last bit of the number
        ans = (bit * i) + ans;  // Multiply by the current place value
        n = n >> 1;  // Right shift the number to get the next bit
        i = i * 10;  // Move to the next place value (i.e., 1, 10, 100, etc.)
    }
    cout << "The Binary number for " << dup << " is : " << ans;
}


/*

Input : 5

Output : The Binary number for 5 is : 101

*/


//If you give input out of range then it will print any wrong value that is not a binary example 10000 is out of range 
//Therefore logic is correct just be careful for range
