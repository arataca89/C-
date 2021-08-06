// cin_validandoEntrada.cpp
// Validando a entrada via std::cin
// 20210806
// arataca89@gmail.com
// Aulas particulares de programação em C++

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void printArray(const double array[], int size){
    int i= 0;
    cout << "{";
    for(; i < size - 1; i++){
        cout << array[i] << ",";
    }
    cout << array[i] << "}" << endl;
}

int main(){
    const int SIZE = 3;
    double notas[SIZE];
    double n = 0.0;
    int i = 0;

    while(i < SIZE && cin.good()){
        cout << "Entre com a nota: ";
        cin >> n;

        if(cin.good()){
            notas[i++] = n;
        }
        else{
            cout << "ERRO:entrada invalida!" << endl;
            cin.clear();
            cin.ignore();
        }        
    }

    printArray(notas, SIZE);

    return 0;
}
/*
SAIDA:
Entre com a nota: 2.3
Entre com a nota: a
ERRO:entrada invalida!
Entre com a nota: 4.5
Entre com a nota: d
ERRO:entrada invalida!
Entre com a nota: 7.8
{2.3,4.5,7.8}
*/

// fim de cin_validandoEntrada.cpp
// arataca89@gmail.com
// Aulas particulares de programação em C++
