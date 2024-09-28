#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    // int mid = (start + end)/2; Note : This is correct formula but can cause error if both start and end values are big
    // Therefore, below is the optimized formula 
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        // if you want to go to right part 
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{ // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1; // Value is not available in the given array
}

int main(){
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 12);

    cout << "Index of 12 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 4);

    cout << "Index of 4 is " << oddIndex << endl;

    return 0;

}


/*

Output : Index of 12 is 4
         Index of 4 is -1

*/