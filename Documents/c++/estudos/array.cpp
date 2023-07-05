#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int a[n]; //número definido de elementos em uma lista
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    
    for (int i=0 ; i<n ; ++i){
        cout << a[i] << " ";
    }
    cout << "\n";
}