# include <iostream>
using namespace std;




int main(){
    int a, b;
    cin >> a>> b;
    
    int arr[a];
    
    for (int i = 0; i< a; i++){
        cin >> arr[i];
    }
    
    string m = "NO";
    for (int i = 0; i < a; i++){
        if (arr[i]== b){
            m = "YES";
        } 
        else {
            continue;
        }
    }
    
    cout << m<< endl;
    
    return 0;
}