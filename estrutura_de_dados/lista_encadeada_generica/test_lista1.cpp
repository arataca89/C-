/********************************************************************
 * Arquivo  : test_lista1.cpp
 * Data     : 20220402
 *  
 * Teste da lista encadeada usando o tipo inteiro.
 * 
 * Funcionalidades testadas:
 *      Criacao da lista
 *      push_inicio()       
 *      print()
 *      clear()
 *      push_fim()
 *      is_void()
 *      Destruicao da lista
 * 
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++
 * *****************************************************************/
#include <iostream>
using std::cout;

#include <string>
using std::string;

#include "lista_encadeada.hpp"

int main(){
    Lista<int> lista1;

    cout << "\nInserindo no inicio:\n";
    for(int i = 1; i <= 5; i++){
        Node<int> n1 = Node<int>(i);
        lista1.push_inicio(n1);
        lista1.print();
    }

    cout << "\n";
    lista1.clear();
    lista1.print();
    cout << "\n";

    cout << "Inserindo no final:\n";
    for(int i = 1; i <= 5; i++){
        Node<int> n1 = Node<int>(i);
        lista1.push_fim(n1);
        lista1.print();
    }
    cout << "\n";
    return 0;
}
/********************************************************************
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++
 * *****************************************************************/