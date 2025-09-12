#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int soma = 0;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        if (y <= x) soma += y;
    }
    cout << soma << endl;
    return 0;
}