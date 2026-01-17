# include <iostream>
using namespace std;

int main(){
    long long a, b ;
    cin >> a>> b;

    int aend, bend;
    aend = a % 10;
    bend = b % 10;
    cout << aend +bend << endl;

    return 0;
}