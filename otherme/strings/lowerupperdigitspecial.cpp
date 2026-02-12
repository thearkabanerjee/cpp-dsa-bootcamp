# include <iostream>
using namespace std;


int main(){
    char a;
    cin >> a;
    
    if (a >='a' and a<='z'){
        cout << "lower";
    }
    else if (a >='A' and a<='Z'){
        cout << "upper";
    }
    else if (a >=0 and a<=9){
        cout << "digit";
    }
    else {
        cout << "special";
    }
    
    return 0;
}