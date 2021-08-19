/********************************************************************
Nome: int_reverse.cpp
Descrição: Inverte os dígitos de um inteiro
Data: 20210819

arataca89@gmail.com
Aulas particulaes de programação em C++ 
********************************************************************/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int reverse(int n){
    int r = 0;
    while(n != 0){
        r *= 10;
        r += n % 10;
        n /= 10;
    }
    return r;
}

int main(){
    for(int nr = 0;;){
        cout << "Entre com um inteiro ou -1 para encerrar: ";
        cin >> nr;
        if(nr == -1) exit(EXIT_SUCCESS);
        cout << nr << " invertido: " << reverse(nr) << endl;
    }
    return 0;
}
/********************************************************************
 
SAIDA:

Entre com um inteiro ou -1 para encerrar: 123
123 invertido: 321
Entre com um inteiro ou -1 para encerrar: 12345
12345 invertido: 54321
Entre com um inteiro ou -1 para encerrar: 1341
1341 invertido: 1431
Entre com um inteiro ou -1 para encerrar: 1185
1185 invertido: 5811
Entre com um inteiro ou -1 para encerrar: -1

 arataca89@gmail.com
 Aulas particulaes de programação em C++ 
 *******************************************************************/
