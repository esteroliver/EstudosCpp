#include <bits/stdc++.h>

using namespace std;

int main(){
  long long a, m, l, r;
  cin >> a >> m >> l >> r;

  long long arvores = 0;

  if(l == r){
    if(a <= l){
        long long esp_a = abs(l - a);
        esp_a = esp_a/m;
        a += m * esp_a;
        if (a < l){ 
            a+=m;
        }
        if(a == l) arvores = 1;
    }
    else if(a >= r){
        long long esp_a = abs(a - r);
        esp_a = esp_a/m;
        a -= m * esp_a;
        if (a > r){
            a-=m;
        }
        if (a == r) arvores = 1;
    }
    else{
        arvores = 0;
    }
  }

  else if (a <= l){
    long long esp_a = abs(l - a);
    esp_a = esp_a/m;
    a += m * esp_a;
    if (a < l){ 
        a+=m;
        arvores++;
    }
    else if(a == l) arvores++;
    arvores += abs(r - a)/m;
  }

  else if(a >= r){
    long long esp_a = abs(a - r);
    esp_a = esp_a/m;
    a -= m * esp_a;
    if (a > r){
        a-=m;
        arvores++;
    }
    else if (a == r) arvores++;
    arvores += abs(a - l)/m;
  }

  else if (a > l && a < r){
    arvores = abs(a - l)/m + abs(r - a)/m + 1;
  }
  
  cout << arvores << endl;
}
