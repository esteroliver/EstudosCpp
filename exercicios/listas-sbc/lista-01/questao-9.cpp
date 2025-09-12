#include <iostream>

using namespace std;

int main(){
    int caixas,saldo_inicial, saldo_total;
    cin >> caixas;
    int numeros[caixas];
    saldo_inicial = 100;
    saldo_total = saldo_inicial;
    
    for (int i=0; i<caixas; i++){
        cin >> numeros[i];
    }
    for (int j=0; j<caixas; j++){
        saldo_total = saldo_total + numeros[j];
        if (saldo_total > saldo_inicial){
            saldo_inicial = saldo_total;
        }
    }
    cout << saldo_inicial << '\n';
}