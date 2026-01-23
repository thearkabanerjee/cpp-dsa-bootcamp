# include <iostream>
using namespace std;

int main(){
    long long a;
    int ans = 0;
    cin >> a;

    while (a >0){
        ans += (a % 10);
        a /= 10;
    }
    cout << ans << endl;
}