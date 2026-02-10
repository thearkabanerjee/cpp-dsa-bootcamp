#include <algorithm>
# include <iostream>
using namespace std;


int main(){
    int m;
    cin >> m;
    
    for (int i = 0; i <m; i++){
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++){
            cin >> arr[i];
        }
        
        for (int i = 0; i+1 <a; i +=2){
            swap(arr[i], arr[i+1]);
        }
        for (int i = 0; i<a; i++){
            cout << arr[i]<< " ";
        }
        
        cout << endl;
    }
    
    return 0;
}