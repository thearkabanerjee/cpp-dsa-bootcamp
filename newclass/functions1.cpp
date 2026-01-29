# include <iostream>
using namespace std;


// bionomial distribution

long long factorial(int num){
    long long a = 1;
    for (int i = 1; i<=num; i++){
        a *= i;
    }
    return a;
}


int main(){
    int a ,b;
    cin >> a >> b;
    long long m = factorial(a)/(factorial(a-b)* factorial(b));
    cout << m << endl;
    return 0;
}