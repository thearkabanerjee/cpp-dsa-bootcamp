# include <iostream>
using namespace std;


int main(){
    long long a, b;
    cin >> a>> b;
    
    
    long long factorial1 = 1;
    long long factorial2 = 1;
    
    
    string flag = "Yes";
    if  (a != 0 or b!= 0){
        if  (a != b){
            flag = "No";
        }
    }
    else{
        for (int i = 1; i<=a; i++){
            factorial1 *= i;
        }
        for (int j = 1; j <=b; j++){
            factorial2 *= j;
        }
    }
    
    
    if  (factorial1 != factorial2){
        flag = "No";
    }
    if  (a == 0 and b == 1 or a == 1 and b == 0){
        flag = "Yes";
    }
    
    cout << flag << endl;
    return 0;
}