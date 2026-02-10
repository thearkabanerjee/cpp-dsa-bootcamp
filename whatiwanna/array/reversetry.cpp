# include <iostream>
using namespace std;

int main(){
    int arr[2];
    
    arr[0] = 1;
    arr[1] = 2;
    
    swap(arr[1], arr[0]);
    
    for (int i = 0; i <2; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}