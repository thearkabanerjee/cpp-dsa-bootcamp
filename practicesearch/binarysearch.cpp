# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    int arr[a];
    
    for (int i = 0 ; i < a; i++){
        cin >> arr[i];
    }
    
    int b;
    cin >> b;
    
    string flag = "False";
    
    int start = 0; 
    int ending = a-1;
    
    while (start <= ending){
        int mid = (start +ending)/2;
        
        
        if (arr[mid] == b){
            flag = "True";
            break;
        }
        else if (arr[mid] > b){
            ending = mid -1;
        }
        else {
            start = mid +1;
        }
    }
    
    cout << flag << endl;
    return 0;
}
