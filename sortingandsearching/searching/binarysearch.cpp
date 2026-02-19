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
    
    string flag = "NO";
    
    int start = 0; 
    int end = a-1;
    while (start <=end){
        int mid = (start + end )/2;
        
        if  (arr[mid] == b){
            flag = "YES";
        }
        if (arr[mid] < b){
            start = mid+1;
        }
        else {
            end = mid -1;
        }
    }
    
    
    cout << flag << endl;
    return 0;
}