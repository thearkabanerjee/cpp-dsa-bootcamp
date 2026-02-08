// add the last digits of numbers

# include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int nun1 = num1 % 10;
    int nun2 = num2 % 10;
    cout << (nun1+ nun2) << endl;
    return 0;
}