#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int c; cin >> c;
        char s_cesar[s.size()];
        for(int j = 0; j < s.size(); j++){
            if(s[j] - c < 'A') s_cesar[j] = 90 - (65 - (s[j] - c)) + 1;
            else s_cesar[j] = s[j] - c;
        }
        s_cesar[s.size()] = '\0';
        string cesar = s_cesar;
        cout << cesar << endl;
    }
    return 0;
}