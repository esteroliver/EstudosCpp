#include <bits/stdc++.h>

using namespace std;

int main(){
    int d;
    while(cin >> d){
        //limite das águas - 12 milhas
        int vf, vg; //distancia entre fugitivo e guarda, velocidade do fugitivo, velocidade da guarda
        cin >> vf >> vg;
        string resp = "N";
        int r;
        if(vg > vf){
            r = vg - vf;
            r = d/r;
        }
        if(r < (12 - d)) resp = "S";
        cout << resp << endl;
    }
    return 0;
}