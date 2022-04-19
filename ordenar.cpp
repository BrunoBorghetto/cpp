#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << "Você devera digitar tres numeros inteiros diferentes: " << endl;
    
    int numero1, numero2, numero3;

    cout << " Digite o primeiro numero: ";
    cin >> numero1;
    cout << " Digite o segundo numero: ";
    cin >> numero2;
    cout << " Digite o terceiro numero: ";
    cin >> numero3;

    if(numero1 > numero3){
        int sequencia = numero3;
        numero3 = numero1;
        numero1 = sequencia;
    }
    if(numero1 > numero2){
        int sequencia = numero2;
        numero2 = numero1;
        numero1 = sequencia;
    }
    if(numero2 > numero3){
        int sequencia = numero3;
        numero3 = numero2;
        numero2 = sequencia;
    }

    cout << "Na ordem crescente os numeros são: " << numero1 << ", " << numero2 << ", " << numero3;

}