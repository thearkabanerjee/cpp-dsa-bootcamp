# include <iostream>

using namespace std;

int main(){
    long long counter =0;
    long long n;
    cin >> n;
    for (int i = 0; i<=n; i++){
        counter +=i;
        
    }
    cout << counter << endl;
    
    return 0;
}

// this takes a lot of time
// there is another way of doing this and what i need to do is:

// n * (n+1) / 2 