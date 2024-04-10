#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    while(cin >> x){
        string senha;
        cin >> senha;
        string valida = "Senha invalida.";
        bool max = false;
        bool min = false;
        bool num = false;
        bool carac = false;
        bool tam = false;
        for(int i = 0; i < senha.size(); i++){
            if((senha[i] >= 32 && senha[i] <= 47) || (senha[i] >= 58 && senha[i] <= 64) || (senha[i] >= 91 && senha[i] <= 96)) carac = true;
            if(senha[i] >= 65 && senha[i] <= 90) max = true;
            if(senha[i] >= 97 && senha[i] <= 122) min = true;
            if(senha[i] >= 48 && senha[i] <= 57) num = true;
        }
        if(senha.size() >= 6 && senha.size() <= 32) tam = true;
        if(max && min && num && tam && !carac) valida = "Senha valida.";
        cout << valida << endl;
    }
    return 0;
}