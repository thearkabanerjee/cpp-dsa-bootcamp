# include <iostream>
using namespace std;


void findmaxmin(int a, int b){
    if (a>= b){
        cout << "Min = "<< b << endl;
        cout << "Max = "<< a <<endl;
    }
    else {
        cout << "Min = "<< a<<endl;
        cout << "Max = "<< b<< endl;
    }
}


int main(){
    int a, b;
    cin >> a>> b;
    
    findmaxmin(a, b);
    return 0;
}