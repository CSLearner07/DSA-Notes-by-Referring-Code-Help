#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

int getMax(int num[], int size) {
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    return max;
}

int getMin(int num[], int size) {
    int min = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (num[i] < min) { // Fix the comparison to find the minimum
            min = num[i];
        }
    }

    return min;
}

int main() {
    int size;

    // Input array size
    cout << "Enter the size of array: ";
    cin >> size;

    int num[100];

    // Input array elements
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "The minimum element in the array is: " << getMin(num, size) << endl;
    cout << "The maximum element in the array is: " << getMax(num, size) << endl;
    

    return 0;
}


/*

Input : 5
        1 2 3 4 5 

Output :    The minimum element in the array is: 1
            The maximum element in the array is: 5
*/