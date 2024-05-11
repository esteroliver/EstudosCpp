#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int left = b[0];
    int dist = -1;
    for(int i = 1; i < n; i++){
        if(b[i] > left){
            dist = i+1;
            break;
        }
    }
    cout << dist << endl;
    return 0;
}