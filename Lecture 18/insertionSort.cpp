#include<iostream>
#include<vector> // Include vector header
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j]; // Shift elements
            } else {
                break; // Stop if the correct position is found
            }
        }
        arr[j+1] = temp; // Place temp at the correct position
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(n, arr);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


/*

Output : 
Enter the number of elements: 6
Enter the elements:
85
12
59
45
72
51
Sorted array: 12 45 51 59 72 85

*/
