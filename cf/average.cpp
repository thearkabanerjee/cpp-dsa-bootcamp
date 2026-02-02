#include <iomanip>
# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    double sum = 0.0;
    
    for(int i = 0; i<a; i++){
        
        double N;
        cin >> N;
        sum +=N;
    }
    cout <<setprecision(7)<< sum /a << "\n";
    return 0;
}