# include <iostream>
using namespace std;

int count0s(string n){
    int counter = 0;
    for (int i = 0; i <n.length(); i++){
        if (n[i]=='0'){
            counter ++;
        }
    }
    return (counter);
}

int main(){
    string num;
    cin >> num;
    
    cout << count0s(num)<< endl;
    
    return 0;
}