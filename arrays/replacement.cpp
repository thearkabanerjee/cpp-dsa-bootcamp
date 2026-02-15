# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    
    int arr[a];
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i< a; i++){
        if (arr[i] >0){
            arr[i] = 1;
        }
        else if (arr[i] ==0){
            arr[i] = 0;
        }
        else {
            arr[i] = 2;
        }
        cout << arr[i]<< " ";
    }
    
    cout << endl;
    return 0;
}