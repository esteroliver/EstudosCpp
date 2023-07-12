#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int casos;
    cin >> casos;

    for (int i=0; i<casos; i++){
        double quantia, maior;
        int marcas;
        cin >> quantia >> marcas;
        maior = 0;
        double precos[marcas];

        for (int j=0; j<marcas; j++){
            cin >> precos[j];
        }

        for (int k=0; k<marcas; k++){
            // int divisor = quantia/precos[k];
            // precos[k] = precos[k] * divisor;
            // if ( (quantia - precos[k]) > maior ){
            //     maior = quantia - precos[k];
            // }


            double fixo = precos[k];
            while (precos[k]+fixo <= quantia){
                precos[k] = precos[k] + fixo;
            }
            if ( (quantia-precos[k]) > maior ){
                maior = quantia-precos[k];
            }
        }

        cout << fixed << setprecision(2) << maior << '\n';
    }


}