# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    double radius;
    cin >> radius;
    double pie = 3.141592653;
    double area = pie * radius * radius;
    cout << fixed << setprecision(9)<< area << endl;
    return 0;
}