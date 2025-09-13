#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, c, r;

    cin >> d >> c >> r;

    int result = r;

    multiset<int> cans;

    for(int i = 0; i < c; i++){
        int atv;
        cin >> atv;
        cans.insert(atv);
    } 

    for(int i = 0; i < r; i++){
        int atv;
        cin >> atv;
    }

    for(auto id = cans.begin(); id != cans.end(); ++id){
        if(*id <= d){
            d -= *id;
            result++;
        }
    }

    cout << result << "\n";
   
    return 0;
}