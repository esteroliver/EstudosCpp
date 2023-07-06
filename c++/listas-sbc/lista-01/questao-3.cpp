#include <iostream>

using namespace std;

int main(){
    int comp, dist, custo_km, valor_p, total;
    cin >> comp >> dist;
    cin >> custo_km >> valor_p;
    total = (comp*custo_km) + (((comp - (comp%dist))/dist)*valor_p);
    cout << total << "\n";
}