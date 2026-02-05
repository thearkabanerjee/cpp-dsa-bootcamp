# include <iostream>
using namespace std;


int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    long long arr[a];
    for (int i = 0; i<a; i++){
        cin >> arr[i];
    }
    
    string result;
    for (int i =0; i<a; i++){
        if (arr[i]== b){
            result = "YES";
            break;
        }
        else {
            result = "NO";
        }
    }
    
    cout << result<< endl;
    return 0;
}