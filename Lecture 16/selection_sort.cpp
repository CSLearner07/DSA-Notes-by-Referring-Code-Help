#include<iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap the elements
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {72, 50, 10, 44, 8, 20}; 
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


/* 

Output :    Unsorted array: 72 50 10 44 8 20
            Sorted array: 8 10 20 44 50 72

*/          