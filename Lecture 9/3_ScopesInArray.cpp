    #include <iostream>

    using namespace std;

    void LearnScope(int arr[], int size){

        cout << "Function starts " << endl;

        arr[0] = 120;

        for (int i = 0 ; i < size ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Function ends"<< endl;
    }

    int main(){
        
        int n ; 
        cout << "Enter the size of array : ";
        cin >> n;

        int arr[100];

        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        cout << endl;

        cout << "Output inside the function : " << endl ;
        LearnScope(arr, n);
        cout << endl;


        cout << "output after running function : ";
        for (int i = 0 ; i < n ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
/*

Input : Enter the size of array : 5
                                  1
                                  2
                                  3
                                  4
                                  5

Output inside the function :
                                Function starts
                                120 2 3 4 5
                                Function ends

output after running function : 120 2 3 4 5

*/


//The statement "the array name is its address" is partially correct. In C++, 
// the array name (like arr) decays into a pointer to its first element when passed to functions. 
// That's why any modifications in the function are reflected in the original array.

// Here we learned that when an array is passed to a function in C++, 
// it decays into a pointer to its first element. This means any changes 
// made to the array inside the function will affect the original array in the main function.
