# include <iostream>
using namespace std;


string multiple(long long a, long long b){
    if (a>=b){
        return (a % b == 0? "Yes":"No");
    }
    else {
        return (b % a == 0? "Yes":"No");
    }
}

int main(){
    long long a, b;
    cin >> a>> b;
    
    
    cout << multiple(a, b)<< endl;
    return 0;
}