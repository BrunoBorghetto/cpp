#include <bits/stdc++.h>

using namespace std;

int main(){

    float numeroBandeira;
    float kilometragem;
    int escolhaBandeira;
    float taxaMinima = 3.50;
    float valorCorrida;
    int desconto;

    cout << "Digite o n�mero da bandeira 1 ou 2: " << endl;
    cin >> escolhaBandeira;
    cout << "Digite a kilometragem rodada: " << endl;
    cin >> kilometragem;

    if(escolhaBandeira == 1){
        numeroBandeira = 1.80;
    }
    if(escolhaBandeira == 2){
        numeroBandeira = 2.30;
    }

    valorCorrida = numeroBandeira * kilometragem;

    if(valorCorrida < taxaMinima){
        cout << "O valor da corrida �: " << valorCorrida;
        
    }
    if(valorCorrida > taxaMinima){
        cout << "O valor da corrida �: " << valorCorrida;
        cout << "Deseja aplica o desconto? (1- sim ou 2- n�o) ";
        cin >> desconto;

        if(desconto == 1 ){
            cout << "Desconto de 30%% aplicado, valor resultado de: " << valorCorrida * 70 / 100;
        }
    }
}