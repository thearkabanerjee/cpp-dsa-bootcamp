# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    
    if  (a == 1){
        cout << a<< endl;
    }
    
    else if (a >1){
        for (int i = 1; i <= a; i++){
            int counter = 0;
            for (int j = 1; j <=i; j++){
                if (i % j == 0){
                    counter += 1;
                }
            }
            if  (counter <= 4){
                cout << i<< " ";
            }
        }
        cout << endl;
    }
    
    
    
    return 0;
}