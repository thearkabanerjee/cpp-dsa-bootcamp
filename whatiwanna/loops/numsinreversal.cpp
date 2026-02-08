# include <iostream>
using namespace std;


long long reversal(long long a){
    long long num = 0;
    while (a > 0){
        num = (num * 10) +a% 10;
        a/= 10;
    }
    return (num);
}

int main(){
    long long a;
    cin >> a;
    
    cout << reversal(a)<< endl;
    
    return 0;
}