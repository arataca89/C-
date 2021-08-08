/********************************************************************
output.cpp
Teste do Template de função variádica output (clone de cout).
20210808
arataca89@gmail.com
Aulas particulares de programação em C++
********************************************************************/

#include <iostream>
using std::cout;

#include "output.h"

int main(){
    cout << "\n";
    output("Teste de output", 1341, 3.14, 's', '\n');
    return 0;
}
/********************************************************************
SAIDA:

Teste de output 1341 3.14 s 
 
********************************************************************/
