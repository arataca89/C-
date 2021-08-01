// selectionSort() implementa o algoritmo de ordenação por seleção.
// arataca89@gmail.com
// Aulas de programação C++

#include <iostream>
using std::cout;
using std::endl;

void swap(int *const a, int *const b){
    int box = *a;
    *a = *b;
    *b = box;
}

void selectionSort(int *const array, int size){
    int indiceMenor;
    for(int i = 0; i < size-1;i++){
        indiceMenor = i;
        for(int j = i+1; j < size; j++){
            if(array[j] < array[indiceMenor]){
                indiceMenor = j;
            }
        }
        swap(&array[i], &array[indiceMenor]);
    }
}


void printArray(int *const array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;    
}

int main(void){

    int vetor[] = {14,2,10,33,-1,57,89,-13,0,72};

    int size = sizeof(vetor) / sizeof(vetor[0]);

    printArray(vetor,size);

    selectionSort(vetor, size);

    printArray(vetor,size);

    return 0;
}

