# include <iostream>
using namespace std;


int main(){
    long long a,b;
    cin >> a;
    b = a;
    long long reva = 0;
    while (a >0){
        reva = (reva * 10)+ (a%10);
        a /=10;
    }
    cout << reva <<endl;
    cout << (b == reva ? "YES" : "NO") <<endl;

    return 0;
}