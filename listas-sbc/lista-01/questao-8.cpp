#include <iostream>

using namespace std;

int main(){
    int num, chances;
    cin >> num;
    int numeros[num];
    chances = num;

    for (int i=0; i<num;i++){
        cin >> numeros[i];
    }
    for (int j=0; j<num; j++){
        if (numeros[j] == 1){
            chances = chances - 1;
        }
    }
    cout << chances << '\n';
}