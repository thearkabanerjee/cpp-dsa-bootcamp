# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    long long ans = 1;
    for (int i = 1; i<= a; i++){
        ans *= i;
    }  
    cout << ans<< endl;

    return 0;
}