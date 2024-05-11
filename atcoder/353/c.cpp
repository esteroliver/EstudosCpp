#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int p = a[0];
    int ind0 = n - 1;
    int ind1 = 1;
    int ind2 = 0;
    int resp = 0;
    while(p != 0){
        int soma = 0;
        soma = p + a[ind1];
        if(soma >= 100000000){
            soma = soma % 100000000;
            
        }
        resp += soma;
        ind1++;

        if(ind1 > ind0){
            if(ind2+1 == n-1) break;
            p = a[++ind2];
            ind1 = ind2+1;
        }
    }
    cout << resp << endl;
}