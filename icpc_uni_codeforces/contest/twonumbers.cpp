// #include <bits/stdc++.h> // you need to add this this is better for any codeform
# include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    double ans = (double)a/b;
    cout << "floor " << a << " / " << b << " = " << floor(ans) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(ans) << endl;
    cout << "round " << a << " / " << b << " = " << round(ans) << endl;
    return 0;
}

