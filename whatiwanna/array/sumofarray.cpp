# include <iostream>
using namespace std;

int main(){
    long long a;
    cin >> a;
    int arr[a];
    long long sum = 0;
    for (int i = 0; i< a; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i <a ; i++){
        sum += arr[i];
    }
    
    cout << sum << endl;
    return 0;
}