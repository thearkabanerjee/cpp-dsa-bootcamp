#include <iostream>
using namespace std;

// this is the way in which you can like define what to do
int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    if (S == '+')
        cout << A + B;
    else if (S == '-')
        cout << A - B;
    else if (S == '*')
        cout << A * B;
    else if (S == '/')
        cout << (int)A / B;

    return 0;
}
