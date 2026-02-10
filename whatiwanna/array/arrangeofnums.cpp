# include <iostream>
using namespace std;


int main(){
    int m;
    cin >> m;
    
    for (int i = 0; i <m ;i++){
        int a;
        cin >> a;
        
        for (int i = 1; i <=a; i++){
            if(i % 2 == 1){
                cout << i<< " ";
            }
        }
        
        for (int i = a; i >=1; i--){
            if (i % 2 == 0){
                // if (num)
                if (i != 2){
                    cout << i << " ";
                }else{
                    cout << i;
                }
                
            }
            
        }
        cout <<endl;
    }
    return 0;
}