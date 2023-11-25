#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
        int resp_i = l;
        for (int j = l; j < r; j++){
            if ((j - a[i] < j+1 - a[i]) && (j >= a[i])){
                resp_i = j;
                break;
            }
        }
        cout << resp_i << " ";
    }
}