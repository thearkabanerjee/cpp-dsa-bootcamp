# include <iostream>
using namespace std;

int main(){
    long long num;
    cin >> num;

    if (num == 0) {
        cout << 0 << endl;
    }
    else {
        while (num != 0){
        // num = (num * 10)+ (a % 10);
        // num /= 10;
        cout << num % 10;
        num /= 10;
        }
    }
    // num = 0;
    

    return 0;
}