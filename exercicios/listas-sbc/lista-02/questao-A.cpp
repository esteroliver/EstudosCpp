#include <bits/stdc++.h>

using namespace std;

int main(){
    int quant, altura;
    cin >> quant >> altura;
    int alts[quant];
    for (int i = 0; i < quant; i++) cin >> alts[i];
    int anw = 0;
    for (int i = 0; i < quant; i++){
        if(alts[i] <= altura) anw++;
    }
    cout << anw << endl;
}