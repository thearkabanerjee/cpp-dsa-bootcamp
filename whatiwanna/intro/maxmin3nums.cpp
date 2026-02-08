# include <iostream>
using namespace std;


void minmax(int a,int b,int c){
    if (a >= b and a>= c){
        if (b >= c){
            cout << "Min = "<< c<< endl;
            cout << "Max = "<< a<< endl;
        }else {
            cout << "Min = "<< b<< endl;
            cout << "Max = "<< a<< endl; 
        }
    }
    else if(b >= a and b >= c){
        if (c >= a){
            cout << "Min = "<< a<< endl;
            cout << "Max = "<< b<< endl;
        }else {
            cout << "Min = "<< c<< endl;
            cout << "Max = "<< b<< endl; 
        }
    }
    else {
        if (a >= b){
            cout << "Min = "<< b<< endl;
            cout << "Max = "<< c<< endl;
        }else {
            cout << "Min = "<< a<< endl;
            cout << "Max = "<< c<< endl; 
        }
    }
    
}

int main(){
    int a, b, c;
    cin >> a>> b>> c ;

    minmax(a, b, c);
    return 0;
}