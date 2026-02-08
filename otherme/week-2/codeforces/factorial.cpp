# include <iostream>
using namespace std;


int main(){
    int num ;
    cin >> num;
    long long ans = 1;
    for (int i =1; i <= num; i++){
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}