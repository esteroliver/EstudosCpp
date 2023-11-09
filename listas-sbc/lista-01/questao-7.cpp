#include <iostream>

using namespace std;

int main(){
    int num_primo,divisores;
    bool condicao;

    cin >> num_primo;
    condicao = true;
    num_primo = num_primo + 1;

    while (condicao){
        divisores = 0;
        for (int i=1; i<= num_primo; i++){
            if (num_primo%i == 0){
                divisores = divisores + 1;
            }
        }
        if (divisores == 2){
            condicao = false;
        }
        else{
            num_primo = num_primo + 1;
        }
    }
    cout << num_primo << '\n';
}