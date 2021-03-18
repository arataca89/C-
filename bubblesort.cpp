// bubblesort.cpp
// arataca89@gmail.com
// 20210318

// implementação da ordenação pelo método da bolha (bubble sort)

#include <iostream>
using std::cout;
using std::endl;

#include <clocale>
using std::setlocale;

#define SIZE 10


void bubblesort(int *v){
    int i,j,aux;
    
    for(i=SIZE-1;i>=0;i--)
        for(j=0;j<=i;j++){
        	if(v[j] > v[j+1]){
        		aux = v[j];
        		v[j] = v[j+1];
        		v[j+1] = aux;
			}
		} 	
		
}


int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vetor[SIZE] = {6,3,9,1,2,5,0,7,8,4};
	
	cout << "Vetor não ordenado" << endl;
	
	for(i=0;i<SIZE;i++)
	    cout << vetor[i] << " ";
	cout << endl;
	
	bubblesort(vetor);
	
	cout << endl;
	cout << "Vetor ordenado" << endl;
	
	for(i=0;i<SIZE;i++)
	    cout << vetor[i] << " ";
	cout << endl;	
	
	return 0;
}

// fim de bubblesort.cpp
