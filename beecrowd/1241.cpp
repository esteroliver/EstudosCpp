#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a, b;
        string a_s, b_s;
        cin >> a_s >> b_s;
        a = strtoll(a_s, NULL, 10);
        b = strtoll(b_s, NULL, 10);

        string resp = "Nao encaixa";
        if(a >= b){
            int c = b_s.size();
            bool encaixa = true;
            for(int j = 0; j < b_s.size(); j++){
                if(a_s[a_s.size() - b_s.size() + j] != b_s[j]) encaixa = false;
            }
            if(encaixa) resp = "Encaixa";
        }
        cout << resp << endl;
    }

    return 0;
}