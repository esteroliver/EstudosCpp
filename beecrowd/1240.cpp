#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        string resp;
        if(a > 99 && b > 99){
            int r1 = (a/100) * 100;
            r1 = a%r1;
            int r2 = (b/100) * 100;
            r2 = b%r2;
            if (r1 == r2) resp = "encaixa";
            else resp = "nao encaixa";
        }
        else resp = "nao encaixa";
        cout << resp << endl;
    }
    return 0;
}