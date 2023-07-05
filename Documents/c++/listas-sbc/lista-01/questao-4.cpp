#include <iostream>

using namespace std;

int main(){
    int frango, bife, massa, req_f, req_b, req_m, passageiros;
    cin >> frango >> bife >> massa;
    cin >> req_f >> req_b >> req_m;

    if (req_f > frango){
        passageiros = passageiros + (req_f-frango);
    }
    if (req_b > bife){
        passageiros = passageiros + (req_b-bife);
    }
    if (req_m > massa){
        passageiros = passageiros + (req_m-massa);
    }

    cout << passageiros << '\n';
}