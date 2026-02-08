# include <iostream>
using namespace std;

int sumofdigits(long long a){
    int sum = 0;
    while (a > 0){
        sum += a%10;
        a /=10;
    }
    return sum;
}

int main(){
    long long a;
    cin >> a;
    
    
    cout << sumofdigits(a)<< endl;
    return 0;
}