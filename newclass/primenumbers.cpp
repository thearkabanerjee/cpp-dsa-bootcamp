# include <iostream>
using namespace std;


string isprime(int num){
    string prime;
    int counter = 0;
    
    for (int i = 1; i <=num; i++){
        if (num % i ==0) {
            counter += 1;
        }
    }
    return ((counter == 2)?"is prime":"is not prime");
}
int main(){
    int a;
    cin >> a;
    string result = isprime(a);
    cout << result<<endl;
    
    return 0;
}