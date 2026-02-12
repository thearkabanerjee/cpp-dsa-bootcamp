# include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    
    int arr[a][b];
    for (int i = 0; i< a; i++){
        for (int j = 0; j<b; j++){
            cin >> arr[i][j];
        }
    }
    
    int bestrow = -1;
    int maxcount = 0;
    
    for (int i = 0; i< a; i++){
        int count = 0;
        for (int j = 0; j <b ; j++){
            if (arr[i][j] == 1){
                count += 1;
            }
        }
        if (count > maxcount){
            maxcount = count;
            bestrow = i;
        }
    }
    
    cout << bestrow<< endl;
    return 0;
}