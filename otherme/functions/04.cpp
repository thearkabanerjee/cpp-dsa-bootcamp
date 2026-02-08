# include <iostream>
using namespace std;

string primechecker(int n){
    int counter = 0;
    for (int i = 1; i<=n; i++){
        if (n % i ==0){
            counter +=1;
        }
    }
    
    return (counter == 2? "Prime":"Not Prime");
}

int main(){
    int a;
    cin >> a;
    
    string b = primechecker(a);
    cout << b<< endl;
    
    return 0;
}