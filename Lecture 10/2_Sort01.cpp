#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n){
    int left = 0, right = n-1;

    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }

        while(arr[right] == 1 && left < right){
            right--;
        }
    if(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    }
}

int main(){
    
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;
}


/*

Output : 0 0 0 0 0 1 1 1

*/