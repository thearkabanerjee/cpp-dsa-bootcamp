# include <iostream>

using namespace std;

int main(){
    long long a, reva;
    cin >> a;
    reva = 0;
    while (a>0){
        reva = (reva * 10) +(a%10);
        a /= 10;
    }  
    cout << reva << endl;

    return 0;
}