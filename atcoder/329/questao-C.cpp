#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int sub_s = 1;
    char fixo = s[0];
    for (int i = 1; i < n; i++){
        if (fixo == s[i]) sub_s++;
        else fixo = s[i];
    }
    cout << sub_s << endl;
    return 0;
}