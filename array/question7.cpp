# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    
    long long arr[a];
    for (int i =0; i<a ; i++){
        cin >> arr[i];
    }
    string sorted = "YES";
    for (int i = 1; i<a; i++){
        if (arr[i] < arr[i-1]){
            sorted ="NO";
        }
    }
    
    cout << sorted<< endl;
    return 0;
}