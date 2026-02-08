# include <iostream>
using namespace std;


void printer (int num){
    for (int i = 1; i<= num; i++){
        cout << "I am learning functions"<< endl;
    }
}



int main(){
    int a ;
    cin >> a;
    
    printer(a);
    return 0;
}

// int main(){
//     // int a;
//     // cin >> a;
    
//     // for (int i =1; i<=a; i++){
//     //     cout << "I am learning functions"<< endl;
//     // }
    
//     return 0;
// }