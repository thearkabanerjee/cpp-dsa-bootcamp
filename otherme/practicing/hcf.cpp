# include <iostream>
using namespace std;


int hcf(int num1, int num2){
    if (num1>num2){
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    return num1;
}


int main(){
    int a, b;
    cin >> a>> b;
    
    cout <<hcf (a, b)<< endl;
    return 0;
}