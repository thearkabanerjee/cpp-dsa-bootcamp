// find max of 3 numbers 

# include <iostream>
using namespace std;

int main(){
    int num1, num2 , num3;
    cin >> num1 >> num2>> num3;
    if (num1 >= num2 and num1 >= num3){
        if (num2 >= num3){
            cout << "Min"<< " = "<< num3 << endl;
        }
        else {
            cout << "Min"<< " = "<< num2 << endl;
        }
        cout << "Max" << " = " << num1 << endl;
    }
    else if (num2 >= num1 and num2 >= num3){
        if (num1>= num3){
            cout << "Min = "<< num3 << endl;
        }
        else {
            cout << "Min = "<< num1 << endl;
        }
        cout << "Max = "<< num2 << endl;
    }
    else{
        if (num1>= num2){
            cout << "Min = "<< num2 << endl;
        }
        else {
            cout << "Min = "<< num1 << endl;
        }
        cout << "Max = "<< num3 << endl;
    }

    return 0;
}