#include <bits/stdc++.h>

using namespace std;

int main(){

    float numeroBandeira1 = 1.80;
    float numeroBandeira2 = 2.30;
    int kilometragem;
    int bandeiraEscolhida;

    cout << "Escolha a uma bandeira 1 ou 2: ";
    cin >> bandeiraEscolhida;

    if(bandeiraEscolhida == 1 ){
        cout << "Digite a kilometragem rodada: " << endl;
        cin >> kilometragem;
        float multiplicador = kilometragem * numeroBandeira1;
        cout << "O valor da corrida é: R$" << multiplicador;

    }
    if(bandeiraEscolhida == 2){
        cout << "Digite a kilometragem rodada: " << endl;
        cin >> kilometragem;
        float multiplicador = kilometragem * numeroBandeira2;
        cout << "O valor da corrida é: R$" << multiplicador;

    }
}