# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i<a; i++){
        cin >> arr[i];
    }
    
    long long m;
    cin >> m;
    int index = -1;
    for (int i = 0; i<a; i++){
        if (arr[i] == m){
            index = i;
            break;
        }
    }
    
    cout << index <<endl;
    return 0;
}