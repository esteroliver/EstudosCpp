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
        int maior = *max_element(candidatos, candidatos + n);
    
        cout << vencedor << endl;
    }
}