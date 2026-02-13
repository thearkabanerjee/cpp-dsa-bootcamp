# include <iostream>
using namespace std;


int main(){
    int a, b ;
    cin >> a>> b;
    
    int arr[a][b];
    
    for (int i = 0; i<a; i++){
        for (int j = 0; j < b; j++){
            cin >> arr[i][j];
        }
    }
    
    for (int j = 0; j<b; j++){
        cout << arr[0][j]<< " ";
    }
    
    if (a >1){
        for (int i = 1; i < a; i++){
            cout << arr[i][b-1] << " ";
        }  
    }
    
    
    if  (b > 1){
        for (int j = b-2; j >=0; j--){
            cout << arr[a-1][j] << " ";
        }
    }
    
    if (a >1){
        for (int i = a-2; i>= 1; i--){
            cout << arr[i][0] << " ";
        }
    }
    
    
    cout << endl;
    return 0;
}