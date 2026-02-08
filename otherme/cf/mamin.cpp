# include <iostream>
using namespace std;

void findminmax(int arr[], int n){
    int min = arr[0];
    int max = arr[0];
    
    
    for (int i = 0; i <n; i++){
        if (min >= arr[i]){
            min = arr[i];
        }
        if (max <= arr[i]){
            max = arr[i];
        }
    }
    
    cout << min << " "<< max<< endl;
}

int main(){
    int a;
    cin >> a;
    int arr[a];
    
    for (int i = 0; i<a ; i++){
        cin >> arr[i];
    }
    
    findminmax(arr, a);
    return 0;
}