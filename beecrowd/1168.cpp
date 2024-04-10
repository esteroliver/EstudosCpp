#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        int leds = 0;
        for(int i = 0; i < x.size(); i++){
            if (x[i] == '2' || x[i] == '3' || x[i] == '5') leds += 5;
            if (x[i] == '6' || x[i] == '9' || x[i] == '0') leds += 6;
            if (x[i] == '1') leds += 2;
            if (x[i] == '4') leds += 4;
            if (x[i] == '7') leds += 3;
            if (x[i] == '8') leds += 7;
        }
        cout << leds << " leds" << endl;
    }
    return 0;
}