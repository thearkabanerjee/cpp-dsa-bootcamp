# include <iostream>
using namespace std;


int main(){
    int a, b, number;
    cin >> a>> b>> number;
    
    int arr[a][b];
    
    for(int i = 0; i< a; i++){
        for (int j = 0; j< b; j++){
            cin >> arr[i][j];
        }
    }
    
    string flag = "false";
    for (int i = 0; i< a; i++){
        for (int j = 0; j < b; j++){
            if (arr[i][j] == number){
                flag = "true";
                
            }
        }
    }
    
    cout << flag << endl;
    return 0;
}