# include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    int temp = a;
    a = b;
    b = temp;
    
    cout << a<< " "<< b<<  endl;
    
    return 0;
}

// this was actually good, since i havent really had any practice with this one.