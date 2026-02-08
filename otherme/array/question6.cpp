# include <iostream>
using namespace std;


int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    long long arr[a];
    
    for (int i=0; i<a; i++){
         cin >> arr[i];
    }
    int occur = 0;
    for (int i = 0; i<a; i++){
        if (b ==arr[i]){
            occur +=1;
        }
    }
    
    cout << occur << endl;
    return 0;
}