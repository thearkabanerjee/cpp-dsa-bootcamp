# include <iostream>
using namespace std;


int main(){
    int m;
    cin >> m;
    while(m--){
       int a;
       cin >> a;
       int arr[a];
       
       for(int i = 0; i <a; i++){
           cin >> arr[i];
       }
       
       int xr = 0;
       for (int i = 0; i <a ;i++){
           xr ^= arr[i];
       }
       
       cout << xr << endl;
       // delete[] arr;
        
    }
    return 0;
}