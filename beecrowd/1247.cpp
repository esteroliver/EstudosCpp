#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    while(cin >> x){
        //limite das águas - 12 milhas
        int d, vf, vg; //distancia entre fugitivo e guarda, velocidade do fugitivo, velocidade da guarda
        cin >> d >> vf >> vg;
        int vfi = vf;
        int vgi = vg;
        string resp = "N";
        for(int i = d; i < 12; i++){
            vg += vgi;
            vf += vfi;
            if(vg > vf){
                resp = "S";
                break;
            }
        }
        cout << resp << endl;
    }
    return 0;
}