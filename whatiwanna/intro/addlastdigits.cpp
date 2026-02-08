# include <iostream>
using namespace std;


int main(){
    long long a, b;
    cin >> a>> b;
    
    int lastofa= a% 10;
    int lastofb = b % 10;
    
    cout << lastofb+lastofa << endl;
    return 0;
}