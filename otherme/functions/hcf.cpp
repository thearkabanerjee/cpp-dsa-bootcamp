# include <iostream>
using namespace std;

long hcf(int num1, int num2){
    long hcf =1;
    while (num2 != 0){
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}


int main(){
    int a, b;
    cin >> a>> b;
    
    
    cout << hcf(a,b)<< endl;
    return 0;
}