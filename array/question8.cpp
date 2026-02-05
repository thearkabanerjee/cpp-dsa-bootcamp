# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    
    long long arr[a];
    for (int i=0; i<a; i++){
        cin >> arr[i];
    }
    
    int count0= 0;
    int count1= 0;
    for (int i = 0; i<a; i++){
        if (arr[i]==0){
            count0 += 1;
        }
        if (arr[i] ==1){
            count1 += 1;
        }
    }
    
    for  (int i = 0; i<count0; i++){
        cout << "0"<< " ";
    }
    for  (int i = 0; i<count0; i++){
        cout << "1"<< " ";
    }
    cout << endl;
    return 0;
}