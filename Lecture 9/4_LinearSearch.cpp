#include<iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key){

    for (int i = 0; i<size; i++){

        if(arr[i]==key){
            return 1;
        }
    }
     return 0; // dont give return 0 in loop
}

int main(){

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the element to search for : " ; 
    int key;
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if ( found ){
        cout << "Key is present " << endl;
    }
    else {
       cout << "Key is not present" ;
    }
}


/*

Input : Enter the element to search for : 1
Output : Key is present

*/