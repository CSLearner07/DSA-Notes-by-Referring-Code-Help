#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout << "a&b : " << (a&b) << endl;
    cout << "a|b : " << (a|b) << endl;
    cout << "~a : " << ~a << endl;
    cout << "a^b : " << (a^b) << endl;


    cout << "left shift one step : " << (17<<1) << endl; //left shift one step
    cout << "left shift two step : " << (17<<2) << endl; //left shift two step
    cout << "right shift one step : "<< (19>>1) << endl; //right shift one step
    cout << "right shift two step : "<< (19>>2) << endl; //right shift two step

    return 0;
}


/*

AND(&) = If both 1 then 1 else 0

       0 0 = 0
       0 1 = 0
       1 0 = 0
       1 1 = 1

OR(|) = If both 0 then 0 else 1

       0 0 = 0
       0 1 = 1
       1 0 = 1
       1 1 = 1

NOT(~) = Just exchange

       0 = 1
       1 = 0


XOR(^) = If just One of both is 1 then 1 else 0

       0 0 = 0
       0 1 = 1
       1 0 = 1
       1 1 = 0

*/