# include <iostream>
using namespace std;

int main(){
    long long a;
    cin >> a;
    long long b = 0;
    while (a>0){
        b = (b*10) + (a%10);
        a /= 10;
    }
    cout << b << endl;
    return 0;
}