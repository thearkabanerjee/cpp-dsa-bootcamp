# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    long long arr[a];
    for (int i = 0;i<a; i++){
        cin >> arr[i];
    }
    
    int maxvalue =arr[0];
    int index = 1;
    for (int i = 1; i<a; i++){
        if (arr[i]> maxvalue){
            maxvalue=arr[i];
            index = i+1;
        }
    }
    
    cout << maxvalue<<" "<<index<< endl;
    return 0;
}