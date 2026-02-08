// find max of 3 numbers 

# include <iostream>
using namespace std;

int main(){
    int num1, num2 , num3;
    cin >> num1 >> num2>> num3;
    if (num1 >= num2 and num1 >= num3){
        if (num2 >= num3){
            cout << num3  << " ";
        }
        else {
            cout << num2  << " ";
        }
        cout << num1 << endl;
    }
    else if (num2 >= num1 and num2 >= num3){
        if (num1>= num3){
            cout << num3 << " ";
        }
        else {
            cout << num1<< " ";
        }
        cout << num2 << endl;
    }
    else{
        if (num1>= num2){
            cout << num2 << " ";
        }
        else {
            cout << num1 << " ";
        }
        cout << num3 << endl;
    }

    return 0;
}