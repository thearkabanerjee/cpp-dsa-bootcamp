# include <iostream>
using namespace std;


void oneton(int n){
    for(int i=1; i<= n; i++){
        // cout << i << " ";
        int counter = 0;
        for (int y = 1; y <= i; y++){
            if (i % y ==0){
                counter ++;
            }
        }
        if(counter == 2){
            cout << i<< " ";
        }
    }
    cout << endl;
}

int main(){
    int a;
    cin >> a;
    
    oneton(a);
    return 0;
}