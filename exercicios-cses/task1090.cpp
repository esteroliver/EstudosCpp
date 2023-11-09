#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> pesos;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        pesos.push_back(x);
    }
    sort(pesos.begin(), pesos.end());
    int in = 0;
    int fim = n-1;
    int ans = 1;
    while( in != fim && in != fim-1){
        if (pesos[in] + pesos[fim] <= m){
            ans++;
            in++;
            fim--;
        }
        else{
            fim--;
            ans++;
        }
    }
    if ( pesos[in] + pesos[fim] > m) ans++;
    cout << ans << endl;
}