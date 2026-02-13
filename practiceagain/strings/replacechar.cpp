# include <iostream>
using namespace std;

int main(){
    string a;
    char m , n;
    
    cin >> a>> m>> n;
    
    for (int i = 0 ; i< a.length(); i++){
        if (a[i] == m){
            a[i] = n;
        }
    }
    
    
    cout << a << endl;
    return 0;
}