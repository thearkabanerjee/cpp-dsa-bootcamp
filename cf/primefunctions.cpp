// # include <iostream>
// using namespace std;

// int isprime (int num){
//     int counter = 0;
//     for  (int i = 1; i <= num; i++){
//         if (num % i ==0){
//             counter +=1;
//         }
//     }
//     return (counter ==2);
// }

// int main(){
//     int a;
//     cin >> a;
//     for (int i = 0; i<a; i++){
//         int N;
//         cin >> N;
//         if (isprime(N)== true){
//             cout << "YES" << endl;
//         }
//         else {
//             cout <<"NO"<< endl;
//         }
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

bool isprime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a;
    cin >> a;

    while (a--) {
        int N;
        cin >> N;
        if (isprime(N))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

