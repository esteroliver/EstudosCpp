#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> aps_n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        aps_n.push_back(x);
    }
    vector<int> aps_m;
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        aps_m.push_back(x);
    }
    sort(aps_n.begin(), aps_n.end());
    sort(aps_m.begin(), aps_m.end());
    aps_m.push_back(0);
    aps_n.push_back(0);
    int ans = 0;
    n = 0;
    m = 0;
    while(aps_n[n] != 0 && aps_m[m] != 0){
        int dif;
        if(aps_n[n] < aps_m[m]){
            dif = aps_m[m] - aps_n[n];
            if(dif > k) n++;
            else{
                ans++;
                n++;
                m++;
            }
        }
        else if(aps_n[n] > aps_m[m]){
            dif = aps_n[n] - aps_m[m];
            if(dif > k) m++;
            else{
                ans++;
                n++;
                m++;
            }
        }
        else if(aps_n[n] == aps_m[m]){
            ans++;
            n++;
            m++;
        }
    }
    cout << ans << endl;
}