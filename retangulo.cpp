#include <bits/stdc++.h>

using namespace std;

int main(){

    int base1, base2, altura1, altura2;
    float area1;
    float area2;

    cout << "Digite a base do primeiro em cm: " << endl;
    cin >> base1;
    cout << "Digite a altura do primeiro em cm: " << endl;
    cin >> altura1;
    cout << "Digite a base do segundo em cm: " << endl;
    cin >> base2;
    cout << "Digite a altura do segundo em cm: " << endl;
    cin >> altura2;
    cout << endl;

    area1 = base1 * altura1;
    area2 = base2 * altura2;

    cout << "A area do primeiro �: " << area1 << endl;
    cout << "A area do segundo �: " << area2 << endl << endl;

    if(area1 > area2){
        cout << "A area do primeiro � maior que a do segundo retangulo! ";
    }else{
        cout << "A area do segundo � maior que a do primeiro retangulo! ";
    }

}