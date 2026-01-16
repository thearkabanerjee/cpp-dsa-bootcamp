// table for number n

# include <iostream>
using namespace std;
 

int main(){
    int numb ;
    cin >> numb;
    for (int i = 1 ; i <=10; i++){
        cout << numb << " * "<< i << " = "<< numb * i<< endl;
    }
    return 0;
}