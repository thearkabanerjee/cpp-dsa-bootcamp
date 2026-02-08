# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    cout << "[";
    for (int i = 1; i<=a; i++){
        
        if (i% 5 ==0 and i% 3 ==0){
            cout << "FizzBuzz" << " ";
        }else if (i % 5 ==0){
            cout << "Buzz" << " ";
        }
        else if (i% 3 ==0){
            cout << "Fizz"<< " ";
        }
        else {
            cout << to_string(i) << " ";
        }
        
    }
    cout << "]";
    cout <<endl;
    return 0;
}