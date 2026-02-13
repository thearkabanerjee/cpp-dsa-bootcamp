# include <iostream>
using namespace std;


int  main(){
    int a, b;
    cin >> a>> b;
    
    int arr[a][b];
    
    for (int i = 0; i< a; i++){
        for (int j = 0; j< b; j++){
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i< a; i++){
        int rowmin = arr[i][0];
        for (int j = 0; j< b; j++){
            if (arr[i][j] < rowmin){
                rowmin = arr[i][j];
            }
        }
        cout << rowmin<< " ";
    }
    
    
    cout << endl;
    return 0;
}