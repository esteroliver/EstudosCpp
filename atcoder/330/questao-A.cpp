#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; int l;
    cin >> n >> l;
    int quant = 0;;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if (a >= l) quant++;
    }
    cout << quant << endl;
}