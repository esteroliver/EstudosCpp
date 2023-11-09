#include <bits/stdc++.h>

using namespace std;

int main(){
    int disp, c, r;
    cin >> disp >> c >> r;
    int atv_c[c];
    int atv = 0;
    for(int i = 0; i < c; i++){
        cin >> atv_c[i];
    }
    for(int i = 0; i < c; i++){
        if(disp - atv_c[i] >= 0){
            atv++;
            disp -= atv_c[i];
        }
    }
    for(int i = 0; i < r; i++){
        int x; cin >> x;
        disp += x;
        atv++;
    }
    cout << atv << endl;
}