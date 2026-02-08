# include <iostream>
using namespace std;

int findpalindrome(int a){
    int newnum = 0;
    while(a >0){
        newnum = (newnum* 10) + a % 10;
        a /= 10;
    }
    
    return newnum;
}


int main(){
    int a;
    cin >> a;
    
    if(findpalindrome(a)== a){
        cout << "YES"<< endl;
    }
    else {
        cout << "NO"<< endl;
    }
    
   return 0;
}