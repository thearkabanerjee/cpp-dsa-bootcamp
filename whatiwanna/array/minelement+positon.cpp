# include <iostream>
using namespace std;

int main(){
    long long a;
    cin >> a;
    int arr[a];
    
    for (int i =0;i<a; i++){
        cin >> arr[i];
    }
    
    
    int minelement = arr[0];
    int index = 1;
    for(int i = 1; i <a;i++){
        if (arr[i] < minelement){
            minelement = arr[i];
            index = i+1;
        }
    }
    
    cout << minelement << " " << index<< endl;
    return 0;
}