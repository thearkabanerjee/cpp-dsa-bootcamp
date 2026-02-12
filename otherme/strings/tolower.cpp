// # include <iostream>
// using namespace std;

// int main(){
//     char a;
//     cin >> a;
    
//     cout << (char)tolower(a)<< endl;
    
    
//     return 0;
// }


# include <iostream>
using namespace std;


int main(){
    char a;
    cin >> a;
    
    if (a >= 'A' && a<='Z'){
        int ascii_a = int(a);
        int ascii_lower_a = ascii_a + 32;
        
        
        cout << char(ascii_lower_a)<< endl;
    }
    else {
        cout << a<< endl;
    }
    
    
    return 0;
}