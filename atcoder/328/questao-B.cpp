#include <bits/stdc++.h>

using namespace std;

int algiguais(int n){
    if (n < 10){
        return n;
    }
    if (n < 100){
        int m = n%10;
        n = n/10; 
        if (m == n) return n;
        else return -1;
    }
   
    return -1;
}

int main(){
    int meses; cin >> meses;
    int dias[meses];
    for(int i = 0; i < meses; i++){
        int d;
        cin >> d;
        dias[i] = d;
    }
    int ans = 0;
    int x = 1;
    while (x <= meses){
        for(int i = 1; i <= dias[x-1]; i++){
            if (algiguais(i) == algiguais(x) && algiguais(i) > 0 && algiguais(x) > 0){
                ans++;
            }
        }
        x++;
    }
    cout << ans << endl;
    return 0;
}