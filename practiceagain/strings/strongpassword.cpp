# include <iostream>
using namespace std;


int main(){
    string a;
    cin >> a;
    
    int lowercount = 0;
    int uppercount = 0;
    int digitcount = 0;
    int specialchar = 0;
    for (int i = 0; i<a.length(); i++){
        
        if (a[i] >='A' and a[i]<= 'Z'){
            uppercount += 1;
        }
        else if (a[i] >='a' and a[i]<= 'z'){
            lowercount += 1;
        }
        else if (a[i] >='0' and a[i]<= '9'){
            digitcount += 1;
        }
        else {
            specialchar += 1;
        }
    }
    
    if  (a.length() == 10 && lowercount >=1 && uppercount >= 1 && digitcount >= 1 && specialchar >= 1){
        cout << "Strong"<< endl;
    }
    else{
        cout << "Weak"<< endl;
    }
    
    
    return 0;
}