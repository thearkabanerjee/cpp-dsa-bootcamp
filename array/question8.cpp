#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for (int t = 0; t < m; t++) {
        int a;
        cin >> a;

        long long arr[a];
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        int count0 = 0, count1 = 0;
        for (int i = 0; i < a; i++) {
            if (arr[i] == 0) count0++;
            else if (arr[i] == 1) count1++;
        }

        for (int i = 0; i < count0; i++) cout << "0 ";
        for (int i = 0; i < count1; i++) cout << "1 ";
        cout << endl;
    }

    return 0;  // ← moved here
}
