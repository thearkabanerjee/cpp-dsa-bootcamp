#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int arr[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    int maxRow = -1;
    int maxCount = 0;

    for (int i = 0; i < a; i++) {
        int counter = 0;

        for (int j = 0; j < b; j++) {
            if (arr[i][j] == 1) {
                counter++;
            }
        }

        if (counter > maxCount) {
            maxCount = counter;
            maxRow = i;
        }
    }

    cout << maxRow << endl;

    return 0;
}



// need to see this once more for myself