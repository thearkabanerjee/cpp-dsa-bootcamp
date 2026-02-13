# include <iostream>
using namespace std;


int main(){
    string a;
    cin >> a;
    
    
    for (int i = 0; i < a.length(); i++){
        if (a[i] >= 'A' and a[i] <= 'Z'){
            a[i] = (char)tolower(a[i]);
        }
        else  {
            a[i]  = char(toupper(a[i]));
        }
    }
    
    
    cout << a<< endl;
    
    return 0;
}