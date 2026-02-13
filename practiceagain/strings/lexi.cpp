# include <iostream>
using namespace std;
 
int main(){
  string a, b;
  cin >> a>> b;
  if (a> b){
    cout << "B"<< endl;
  }
  else if (a == b){
    cout << "Equal"<< endl;
  }
  else {
    cout << "A"<< endl;
  }
  return 0;
}
