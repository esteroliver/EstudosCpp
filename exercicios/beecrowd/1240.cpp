#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        string resp;
        if(a >= b){
            if(a > 99){
                long long  r1 = (a/100) * 100;
                r1 = a%r1;
                long long r2;
                if(b > 99){
                    r2 = (b/100) * 100;
                    r2 = b%r2;
                }
                else r2 = b;
                if (r1 == r2) resp = "encaixa";
                else resp = "nao encaixa";
            }
            else if (a > 9){
                long long  r1 = (a/10) * 10;
                r1 = a%r1;
                long long  r2;
                if(b > 9){
                    r2 = (b/10) * 10;
                    r2 = b%r2;
                }
                else r2 = b;
                if(r1 == r2) resp = "encaixa";
                else resp = "nao encaixa";
            }
            else{
                if (a == b) resp = "encaixa";
                else resp = "nao encaixa";
            }
        }
        else resp = "nao encaixa";
        cout << resp << endl;
    }
    return 0;
}