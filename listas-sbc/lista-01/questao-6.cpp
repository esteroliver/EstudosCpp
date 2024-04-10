#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num;
    vector<int> divisores;

    cin >> num;

    for (int i=1; i<=num;i++){
        if (num%i == 0){
            divisores.push_back(i);
        }
    }
    for (int j=0; j<divisores.size(); j++){
        cout << divisores[j] << " ";
    }
    cout << '\n';
}