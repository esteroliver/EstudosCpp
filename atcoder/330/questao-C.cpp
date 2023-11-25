#include <cmath>
#include <iostream>

using namespace std;

int main(){
    long double d; 
    cin >> d;
    long long r =sqrt(d);
    long long menor = d;
    for (long long i = 0; i <= r; i++){
        for (long long j = i; j <= r; j++){
            long long res = abs(pow(j, 2) + pow(i, 2) - d);
            if( res < menor && res >= 0) menor = res;
        }
    }
    cout << menor << endl;
}