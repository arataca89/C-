/********************************************************************
Nome: array_resize.cpp
Descrição: Demonstra como realocar memória dinamicamente usando new()
Data: 20210819

arataca89@gmail.com
Aulas particulaes de programação em C++ 
********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

// Realoca memória dinamicamente
int * realoca(int *array, int size, int new_size){
    
    int *new_array = new int[new_size]; // aloca memória com novo tamanho

    // Inicializa novo array com valor zero
    for (int i = 0; i < new_size;i++){
        new_array[i] = 0;
    }

    // Copia dados do array antigo para o novo
    for (int i = 0; i < size;i++){
        new_array[i] = array[i];
    }

    delete[] array; // desaloca memória do array antigo

    array = new_array; // aponta para o array novo

    return array; // retorna novo endereço
}


// Inicializa array com valor zero
void init(int *array, int size){
    for(int i = 0; i < size;i++){
        array[i] = 0;
    }
}


// Preenche array
void insert(int *array, int size){
    for(int i = 0; i < size;i++){
        array[i] = i + 1;
    }
}


 // Imprime array na tela
void print(int *array, int size){
    cout << "{";
    for(int i = 0; i < size;i++){
        cout << array[i];
        if(i < size - 1) cout << ",";
    }
    cout << "}" << endl;
}


int main(){
    const int size = 5;
    int *a1 = new int(size); 
    init(a1,size); 
    print(a1,size);
    insert(a1,size);
    print(a1,size);
    
    //a1[size+1] = 13; // ERRO. Programa é encerrado pois excede
                       // memória alocada.

    // Realocando memória para o array
    int size_novo = size + 3;
    a1 = realoca(a1, size, size_novo);
    print(a1,size_novo);
    a1[size+1] = 13; 
    a1[size+2] = 41;
    print(a1,size_novo);

    delete [] a1;
    return 0;

}
/********************************************************************
 arataca89@gmail.com
 Aulas particulaes de programação em C++ 
 *******************************************************************/
