#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int maior = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > maior) maior = a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] == maior) a[i] = 0; 
    }
    maior = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > maior) maior = a[i];
    }

    cout << maior << endl;
    
    return 0;
}