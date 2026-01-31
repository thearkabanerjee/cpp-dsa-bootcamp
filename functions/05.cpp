# include <iostream>
using namespace std;


long long factorial(int a){
    long long factorial = 1;
    for (int i = 1; i<=a; i++){
        factorial *= i;
    }
    return (factorial);
}

int main(){
    int a;
    cin >> a;
    
    cout << factorial(a)<< endl;
    return 0;
}