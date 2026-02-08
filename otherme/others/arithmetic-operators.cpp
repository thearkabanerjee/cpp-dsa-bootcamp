#include <iostream>
using namespace std;

int main(){
    int sum = 10+2;
    int diff = 10 -2 ;
    int pro = 10 * 2;
    int divv = 10 / 3 ; // this will return 3 and not 3.3333 
    int div = 10.0 /3; // this will give a float in answer
    int rem = 10 % 3 ; // remainder = 1
    // if we divide 2 integers we will always get an integer (integer divisor)
    cout << "the sum is "<< sum<< endl;
    cout << "the diff is "<< diff << endl;
    cout << "the pro is "<< divv << endl;

    return 0;
}