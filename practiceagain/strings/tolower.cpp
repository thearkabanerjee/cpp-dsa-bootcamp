# include <iostream>
using namespace std;


int main(){
    char a;
    cin >> a;
    
    
    if (a >='A' and a <='Z'){
        cout << "Uppercase"<< endl;
    }
    else if (a >= '0' and a<='9'){
        cout << "Digit"<< endl;
    }
    else if (a >= 'a' and a<= 'z'){
        cout << "Lowercase"<< endl;
    }
    else {
        cout << "Special"<< endl;
    }
    
    
    return 0;
}