# include <iostream>
using namespace std;


int main(){
    int a ;
    cin >> a;
    
    for (int i = 1; i <=a; i++){
        // for the spaces we need to fix things
        for (int s = 1; s <= a-i; s++){
            cout << " ";
        }
        if (i ==1 ){
            cout << "*";
        }
        else if (i ==a){
            for (int j = 1; j <= i; j++){
                if (j >1) cout << " ";
                cout << "*";
            }
        }
        else {
            cout << "*";
            for (int space = 1; space <= (2 * i) - 3; space++) {
                cout << " ";
            }
                cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}