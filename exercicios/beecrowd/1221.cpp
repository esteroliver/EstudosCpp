#include <bits/stdc++.h>

using namespace std;

int main(){
    // os divisores de n vão até n/2
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        int n;
        cin >> n;
        string resposta = "Prime";
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0) resposta = "Not Prime";
        }
        cout << resposta << endl;
    }
    return 0;
}