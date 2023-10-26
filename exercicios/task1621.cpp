#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int aux = a[0];
    int quant = 1;
    for (int i = 1; i < n; i++){
        if (aux != a[i]){
            quant++;
            aux = a[i];
        }
    }

    cout << quant << endl;
}

