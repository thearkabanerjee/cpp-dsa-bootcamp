# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    string arr[a];
    for (int i = 0 ; i < a; i++){
        cin >> arr[i];
    }
    
    string b;
    cin >> b;
    int start = 0;
    int ending = a -1;
    
    string flag = "NO";
    
    while (start <= ending){
        int mid = (start +ending) /2 ;
        
        if (arr[mid] == b){
            flag = "YES";
            break;
        }
        else if (arr[mid][0] < b[0]){
            start = mid +1;
        }
        else {
            ending = mid -1;
        }
    }
    cout << flag << endl;
    return 0;
}