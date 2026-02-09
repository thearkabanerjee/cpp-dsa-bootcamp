# include <iostream>
using namespace std;


int main(){
    int a, b;
    cin >> a>> b;
    
    int arr[a]; 
    for (int i = 0; i<a; i++){
        cin >> arr[i];
    }
    
    int occur = 0; 
    for (int i = 0; i <a; i++){
        if (arr[i]== b){
            occur += 1;
        }
    }
    
    cout << occur << endl;
    return 0;
}