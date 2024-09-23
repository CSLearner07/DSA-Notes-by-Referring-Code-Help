#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of n: " << endl;
    cin >> n;
    int i = 1;

      for ( ; ; ){
        if(i <= n)
        {
        cout << i << endl;
        }
            else {
                break;
            }
        i++;
    }

    return 0;
}


/*

Input : 5

Output : 1
         2
         3
         4
         5

*/



// Below code will take you in infinite loop 

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout << "Enter the number of n : " << endl;
//     cin >> n;
//     int i = 1;

//     for ( ; ; ){
//         if(i <= n)
//         {
//         cout << i << endl;
//         }
//         i++;
//     }

//     return 0;
// }