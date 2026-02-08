# include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int positive = 0, negative = 0, even = 0, odd = 0;
    long long x;
    for (int i = 0; i< N; i++){
        cin >> x;
        if (x >0){
            positive += 1;
        }
        else if (x<0){
            negative +=1;
        }

        if (x % 2 ==0){
            even += 1;
        }
        else {
            odd += 1;
        }
    }
    cout << positive<< endl;
    cout << negative << endl;

    cout << even << endl;
    cout << odd << endl;
    return 0;
}