# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    int arr[a];
    
    
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    } 
    int b;
    cin >> b;
    
    
    string flag = "False";
    for (int i = 0 ; i < a; i++){
        if (arr[i] == b){
            flag = "True";
            break;
        }
    }
    
    
    cout << flag << endl;
    return 0;
}