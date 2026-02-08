# include <iostream>
using namespace std;

void printer(int num){
    for (int i = 1; i<=num; i++){
        if (i != num){
            cout << i<< " ";
        }else{
            cout << i;
        }
    }
    cout << endl;
}

int main(){
    int a;
    cin >> a;
    printer(a);
    return 0;
}