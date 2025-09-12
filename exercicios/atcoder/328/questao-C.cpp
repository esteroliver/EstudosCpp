#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam, testes; 
    cin >> tam >> testes;
    char palavra[tam];
    for(int i = 0; i < tam; i++){
        cin >> palavra[i];
    }
    
    for(int i = 0; i < testes; i++){
        int letra1, letra2;
        cin >> letra1 >> letra2;
        int tamanho = tam-letra1-(tam - letra2);
        char parte[tamanho];
        int quant = 0;
        memcpy(parte, &palavra[letra1-1], letra2-(tam - letra2)); 
        char fixo = parte[0];
        for (int i = 1; i <= tamanho; i++){
            if(parte[i] == fixo){
                quant++;
            }
            else fixo = parte[i];
        }
        cout << quant << endl;
    }
    
    return 0;
}