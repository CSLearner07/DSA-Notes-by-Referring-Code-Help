#include<iostream>
#include<vector>

using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){//Comes in right
        s = mid + 1;
        }
        else if(key < arr[mid]){//Comes in left
        e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){//Comes in right
        s = mid + 1;
        }
        else if(key < arr[mid]){//Comes in left
        e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int odd[8] = {0, 0, 1, 1, 2, 2, 2, 2};

    int firstIndex = firstOcc(odd, 8, 2);
    int lastIndex = lastOcc(odd, 8, 2);
  
   cout << "The Total number of occurrence of 2 is : " << (lastIndex-firstIndex) + 1;

    return 0;
}

/*
Find Total Number of occurrence 
Formula = (last - first index) + 1

Input : Find 2 i.e Key = 2
        Array Size = 8
        0 0 1 1 2 2 2 2 
Output : The Total number of occurrence of 2 is : 4

*/