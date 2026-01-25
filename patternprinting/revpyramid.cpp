// # include <iostream>
// using namespace std;


// int main(){
//     int a;
//     cin >> a;
//     for (int i = 0; i <= a ; i++){
//         for (int j = 0; j <i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// this is the code for pyramid normally
// 
// but how do i print it upside down

# include <iostream>
using namespace std;

int main(){
    int a ;
    cin >> a;
    for (int i = 0; a >i; a--){
        for (int j = 0;  j< a; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
