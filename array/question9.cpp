# include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int temp;
    cin >> a >> b;
    
    temp = b;
    b = a;
    a = temp;
    
    
    //also 
    // 
    // swap (a,b);
    
    cout << a;
    cout << b;
    return 0;
}