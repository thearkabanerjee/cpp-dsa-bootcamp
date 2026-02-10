# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    
    for (int i = 0; i <a; i++){
        int m;
        cin >> m;
        int arr[m];
        
        for (int i = 0; i<m; i++){
            cin >> arr[i];
        }
        
        
        int count0 = 0;
        int count1 = 0;
        
        for (int i = 0; i <m; i++){
            if (arr[i] == 0){
                count0 += 1;
            }
            else if (arr[i] == 1){
                count1 += 1;
            }
        }
        for (int i = 0; i<count0; i++){
            cout << 0 << " ";
        }
        for (int i = 0; i <count1; i++){
            if (i < count1){
                cout << 1<< " ";
            }
            else{
                cout << 1;
            }
        }
        
        cout << endl;
        
    }
    
    
    
    return 0;
}