#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n]; 
    vector<int> v1;
    v1.push_back(12);
    cout << v1.size() << "\n";
    v1.clear();

    
    long long a,b,c;
    cin >> a >> b;
    c = (a*2) + (b*2);
    cout << c << '\n';
}