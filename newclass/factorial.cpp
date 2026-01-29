# include <iostream>
using namespace std;


// int  main(){
    
//     int a;
//     cin >> a;
//     long long b =1;
    
//     for (int i = 1; i<=a; i++){
//         b *= i;
//     }
    
//     cout << b << endl;
//     return 0;
// }


// other way of factorial is this

long long factorial(int num){
    long long a =1;
    for (int i = 1; i<=num ; i++){
        a *=i;
    }
    
    return a;
}


int main(){
    int a;
    cin >> a;
    
    long long b = factorial(a);
    cout << b<< endl;
    
    return 0;
}