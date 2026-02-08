# include <iostream>
using namespace std;

string factor(long long num1, long num2){
    if (num1 > num2){
        return (num1 % num2 ==0 ?"Yes":"No"); 
    }
    else{
        return (num2 % num1 ==0 ?"Yes":"No"); 
    }
}

int main(){
    long long a, b;
    cin >> a>> b;
    
    cout << factor(a, b)<< endl;
    return 0;
}