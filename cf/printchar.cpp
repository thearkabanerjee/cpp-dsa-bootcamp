# include <iostream>
using namespace std;

void printer(int a, char b){
    for (int i = 0; i< a; i++){
        cout << b << " ";
    }
    cout << endl;
}


int main(){
    int n;
    cin >>n;
    for (int i =0; i <n; i++){
        int a;
        char b;
        cin >> a>> b;
        printer (a,b);
    }
    
    return 0;
}