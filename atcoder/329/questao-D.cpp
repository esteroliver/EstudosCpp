#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; int m;
    cin >> n >> m;
    int votos[m];
    int candidatos[n];
    for (int i = 0; i < n; i++) candidatos[i] = 0;
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        votos[i] = x;
        candidatos[x-1]++;
    }
    int maior = candidatos[0];
    for (int i = 1; i < n; i++){
        if (candidatos[i] > maior) maior = candidatos[i];
    }
    int vencedor = maior;
    bool iguais = false;
    if (maior == candidatos[0]) iguais = true;
    int menor = votos[0];
    if (iguais){
        for (int i = 0; i < m; i ++){
            if (votos[i] < menor) menor = votos[i];
        }
        vencedor = menor;
    }
    
    cout << vencedor << endl;
    
}