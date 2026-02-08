#include <array>
# include <iostream>
using namespace std;


int main(){
    int a , b;
    cin >> b >> a;
    
    for (int i = 0; i<b; i++){
        long long arr[a];
        for (int i = 0; i<a; i++){
            cin >> arr[i];
        }
        
        for (int i = 1; i<=a;i++){
            swap(arr[i], arr[i-1]);
        }
        
        for (int i = 0; i<a; i++){
            cout << arr[i] << " ";
        }
        cout <<endl;
        return 0;
    }
}