# include <iostream>

using namespace std;

bool primechecker(int num){
    int counter = 0;
    for (int i = 1; i <= num; i++){
        if (num % i ==0){
            counter +=1;
        }
    }
    
    return (counter == 2);
}

int main(){
    
    int a; 
    cin >> a;
    for (int i = 0; i <= a; i++){
        if (primechecker(i) ==1){
            cout << i << " " ;
        }
    }
    cout << endl;
    return 0;
}