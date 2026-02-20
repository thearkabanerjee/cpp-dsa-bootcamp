// what is bubble sort 
// bubble sort is when one element is checked and swapped to its place one by one.


# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];
    
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    
    int min = 0;
    int ending = a-1;
    for (int i = 0; i< a; i++){
        if (arr[i] <= arr[min]){
            swap(arr[i], arr[min]);
            min += 1;
        }
        
    }
    
    for (int i = 0 ; i< a; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


// didnt even get close, 