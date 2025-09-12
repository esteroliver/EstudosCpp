#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string d, s;
        cin >> d >> s;
        string resp;
        bool comp = true;
        for(int j = 0; j < d.size(); j++){
            if(d[j] == s[0]){
                if(d.size() - j >= s.size()){
                    for(int x = 0; x < s.size(); x++){
                        if(s[x] != d[x+j]) comp = false;
                    }
                    if(comp) resp = "Resistente";
                    break;
                }
                else resp = "Nao resistente";
            }
            else resp = "Nao resistente";
        }
        cout << resp << endl;
    }
    return 0;
}