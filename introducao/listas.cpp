#include <iostream>
#include <vector>

using namespace std;

int main(){
    

    int num1, num2, num3;
    int tamanho_lista;
    cin >> num1 >> num2 >> num3;

    vector<int> lista = {num1, num2, num3};

    tamanho_lista = lista.size();

    for (int i=0; i<tamanho_lista; i++){
        cout << lista[i] << " ";
    }
    cout << '\n';
}