# include <iostream>
using namespace std;

long long factorial(int num){
   long long factorial = 1;
   for (int i = 1; i<=num; i++){
       factorial *=i;
   }
   return factorial; 
};


int main(){
    int n, r;
    cin >> n>> r;
    
    long long a = factorial(n)/(factorial(r) * factorial(n-r));
    cout << a<< endl;
    
    return 0;
}