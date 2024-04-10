#include <bits/stdc++.h>

using namespace std;

int main() {
  int b, g;
  cin >> b >> g;
  string resp;
  if (b < g)
    resp = "Glove";
  if (g < b)
    resp = "Bat";
  cout << resp << endl;
  return 0;
}