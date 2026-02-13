# include <iostream>
using namespace std;


int main(){
    string a;
    char b;
    cin >> a >> b;
    
    
    for (int i = 0; i <a.length(); i++){
        if (a[i] != b){
            cout << a[i];
        }
    }
    
    
    cout << endl;
    return 0;
}