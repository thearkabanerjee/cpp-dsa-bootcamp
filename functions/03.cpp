# include <iostream>
using namespace std;


void printrevdivisors(int a){
    for(int i = a; i>=1; i--){
        if (a % i ==0){
            cout << i<< " ";
        }
    }
    cout << endl;
}

int main(){
    int a;
    cin >> a;
    
    printrevdivisors(a);
    
    return 0;
}