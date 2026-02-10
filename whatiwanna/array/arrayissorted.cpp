# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    
    int arr[a];
    for (int i = 0; i <a; i++){
        cin >> arr[i];
    }
    
    string m = "YES";
    for (int i = 1; i <a; i++){
        if (arr[i] < arr[i-1]){
            m = "NO";
        }
    }
    
    cout << m<< endl;
    return 0;
}