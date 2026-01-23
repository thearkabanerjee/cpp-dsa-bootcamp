# include <iostream>
using namespace std;


int main(){
    long long a, b, reva;
    cin >> a;
    b = a;
    reva = 0;
    while (a > 0){
        reva = (reva * 10)+ (a % 10);
        a /= 10;
    }
    if (b == reva){
        cout << "YES"<< endl;
    }
    else {
        cout << "NO" <<endl;
    }

    return 0;
}