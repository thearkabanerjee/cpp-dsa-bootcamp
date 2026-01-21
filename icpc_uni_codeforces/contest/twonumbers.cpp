# include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    if (a%b == 0){
        cout << "floor " << a<< " / " <<b<< " = " << a/b << endl;
        cout << "ceil " << a<< " / " <<b<< " = " << a/b << endl;
    }
    else {
        cout << "floor " << a<< " / " <<b<< " = " << a/b << endl;
        cout << "ceil " << a<< " / " <<b<< " = " << (a/b) +1 << endl;
    }
    return 0;
}