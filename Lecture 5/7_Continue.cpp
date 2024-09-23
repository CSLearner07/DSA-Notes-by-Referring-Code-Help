#include<iostream>
using namespace std;

int main(){

    for(int i = 0 ; i <= 5 ; i++){
        cout << "Hello" << endl;
        cout << "Hey" << endl;
        continue;
        cout << "Reply to karde" << endl;
    }

    return 0;
}

/*

Output : Hello
         Hey
         Hello
         Hey
         Hello
         Hey
         Hello
         Hey
         Hello
         Hey
         Hello
         Hey

*/