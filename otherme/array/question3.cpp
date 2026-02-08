#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    long long arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    long long minVal = arr[0];
    int position = 1; // initialize for first element

    for (int i = 1; i < a; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            position = i + 1;
        }
    }

    cout << minVal << " " << position << endl;
    return 0;
}
