#include <bits/stdc++.h>

using namespace std;

int main(){
    string m, c;
    cin >> m >> c;
    int resp = 0;
    int x = 0;
    for(int i = 0; i < (m.size() - c.size() + 1); i++){
        
        for(int j = x; j < c.size(); j++){
            char esp[x];
            cout << esp << c << endl;
            // int y = 0;
            // while(c[y] != m[j]){
            //     y++;
            // }
            // if(y == c.size()) resp++;
        }
        x++;
    }
    cout << resp << endl;
    return 0;
}