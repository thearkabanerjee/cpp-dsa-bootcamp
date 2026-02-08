# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    for (int i = 1; i<=a; i++){
        for (int j = 1; j <= a; j++){
            if (j ==1 or j ==a or i ==1 or i ==a ){
                cout << "*";
            } else {
                cout << " ";
            } 
        }
        cout << endl;
    }

    
    return 0;
}

// kindda important cz it took me some time to do this