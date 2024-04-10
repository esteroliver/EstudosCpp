#include <bits/stdc++.h>

using namespace std;

int main(){
    int tiks, clts;
    cin >> tiks >> clts;
    multiset<int> array_tiks;
    for(int i = 0; i < tiks; i++){
        int x;
        cin >> x;
        array_tiks.insert(x);
    }
    for(int i = 0; i < clts; i++){
        int valor; cin >> valor;
        auto it = array_tiks.upper_bound(valor);
        if(!(it == array_tiks.begin())){
            it--;
            cout << *it << endl;
            array_tiks.erase(it);
        }
        else cout << "-1" << endl;
    }
}