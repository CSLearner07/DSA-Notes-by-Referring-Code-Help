#include <iostream>
using namespace std;

int printArray(int arr[],int size){
       for (int i = 0; i <size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    //declaring an array
    int dost[10];

    //accessing an array
    cout << dost[0] << endl;

    //initialising an array
    int dusraDost[3] = {1, 2, 3};

    cout << "value of dusraDost third value is : " << dusraDost[2] << endl ;

    //lets learn if we initialise incomplete array values
    int Third[15] = {2, 7};
    int n = 15;

    for (int i = 0; i <n; i++){
        cout << Third[i] << " ";
    }
    cout << endl;

        //Using array with functions
     int Fourth[15] = {3, 8};
        int SizeofFourth = sizeof(Fourth)/sizeof(int);
        printArray(Fourth, SizeofFourth);

        //Types of Array
        char ch[5];
        double firstDouble[5];
        float firstFloat[5];
        bool firstBool[5];


        //Below is the bad practice to declare array size using input
        // int size;
        // cin >> size;
        // int arr2[size];


        //Below is the good practice to declare array size using input 
        int size;
        cout << "Enter the size of array : ";
        cin >> size;

        int arr2[1000];

        cout << "Enter the values in array" << endl;
        for (int i = 0; i < size; i++){
            cin >> arr2[i];
        }

        for(int i = 0;i< size; i++){
            cout << arr2[i];
        }
        cout << endl;

    cout << "Everything is fine";
}