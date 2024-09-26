#include <iostream>
using namespace std;

void reverseArray (int arr[], int n){

    int start = 0;
    int end = n - 1;

    while(start <= end ){
        swap(arr[start], arr[end]);
        start ++;
        end--;
    }

}

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}

/*

Output : 
15 -2 5 0 4 1
4 9 3 6 2

*/