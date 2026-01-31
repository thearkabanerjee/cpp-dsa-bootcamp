# include <iostream>
using namespace std;

void divisors(int a){
    for (int i = 1; i<=a; i++){
        if (a%i ==0){
            cout << i<< " ";
        }
    }
    cout << endl;
}


int main(){
    int a;
    cin >> a;
    
    divisors(a);
    return 0;
}