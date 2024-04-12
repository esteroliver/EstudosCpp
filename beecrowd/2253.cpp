#include <bits/stdc++.h>

using namespace std;

int main(){
    string senha;
    while(getline(cin,senha)){
        string valida = "Senha invalida.";
        bool max = false;
        bool min = false;
        bool num = false;
        bool carac = false;
        bool tam = false;
        for(int i = 0; i < senha.size(); i++){
            if((senha[i] >= 'A' && senha[i] <= 'Z') || (senha[i] >= 'a' && senha[i] <= 'z') || (senha[i] >= '0' && senha[i] <= '9')){
                if(senha[i] >= 'A' && senha[i] <= 'Z') max = true;
                if(senha[i] >= 'a' && senha[i] <= 'z') min = true;
                if(senha[i] >= '0' && senha[i] <= '9') num = true;
            }
            else{
                carac = true;
            }
        }
        if(senha.size() >= 6 && senha.size() <= 32) tam = true;
        if(max && min && num && tam && !carac) valida = "Senha valida.";
        cout << valida << endl;
    }
    return 0;
}