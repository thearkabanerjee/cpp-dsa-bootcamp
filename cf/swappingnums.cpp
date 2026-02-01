# include <iostream>
using namespace std;

void swapper(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << a<< " "<< b<<endl;
}
 // better one honestly
int main(){
    int a, b;
    cin >> a>> b;
    swapper(a,b);
    
    return 0;
}

// this was actually good, since i havent really had any practice with this one.