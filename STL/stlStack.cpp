/********************************************************************
Nome: stlStack.cpp
Descrição: Exemplo do uso da classe STL stack
Data: 20210820

arataca89@gmail.com
Aulas particulaes de programação em C/C++ 

A classe stack implementa uma estrutra de pilha.

Funcoes: 

empty()
    Retorna true se a pilha estiver vazia;
    caso contrario retorna false.

size()
    Retorna o numero de elementos da pilha.

top()
    Retorna o item no topo da pilha, mas não remove.

push(value)
    Insere value no topo da pilha.

pop()
    Remove o item do topo da pilha (nao retorna)
********************************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <stack>
using std::stack;

int main(){

    stack<int> pilha;

    cout << "pilha.size() : " << pilha.size() << endl;
    cout << "pilha.empty(): " << pilha.empty() << endl;

    cout << "inserindo elementos .... " << endl;
    for(int i = 1; i <= 5; i++ ){
        cout << "inserindo: " << i << endl;
        pilha.push(i);
        cout << "pilha.size() : " << pilha.size() << endl;
    }
    cout << "pilha.empty(): " << pilha.empty() << endl;


    cout << "\nretirando elementos ..." << endl;
    for(int i = 1; i <= 5; i++ ){
        cout << "retirando: " << pilha.top() << endl;
        pilha.pop();
        cout << "pilha.size() : " << pilha.size() << endl;
    }
    cout << "pilha.empty(): " << pilha.empty() << endl; 

    return 0;
}
/********************************************************************
 
 SAIDA: 

pilha.size() : 0
pilha.empty(): 1
inserindo elementos ....
inserindo: 1
pilha.size() : 1
inserindo: 2
pilha.size() : 2
inserindo: 3
pilha.size() : 3
inserindo: 4
pilha.size() : 4
inserindo: 5
pilha.size() : 5
pilha.empty(): 0

retirando elementos ...
retirando: 5
pilha.size() : 4
retirando: 4
pilha.size() : 3
retirando: 3
pilha.size() : 2
retirando: 2
pilha.size() : 1
retirando: 1
pilha.size() : 0
pilha.empty(): 1
 
 arataca89@gmail.com
 Aulas particulaes de programação em C/C++ 
 *******************************************************************/
