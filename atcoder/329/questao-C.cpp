#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    set<char> s_c;
    for(int i = 0; i < n; i++){
        s_c.insert(s[i]); //as diferentes letras
    }
    auto id = s_c.begin();
    int quant[s_c.size()]; //vai contar a string com mais caracteres
    for (int i = 0; i < s_c.size(); i++) quant[i] = 0;
    
    return 0;
}