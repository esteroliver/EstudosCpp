#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
    if (b == 0) return a;
    return mdc(b, a%b);
}

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        int c = mdc(a, b);
        cout << c << endl;
    }
    return 0;
}