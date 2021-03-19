// bubblesort_otimizado.cpp
// arataca89@gmail.com
// 20210319

// Comparando o algoritmo bubble sort original e o otimizado

#include <iostream>
using std::cout;
using std::endl;

#include <clocale>
using std::setlocale;

#define SIZE 5


// protótipos de funções
void bubblesortOriginal(int *v);
void bubblesortOtimizado(int *v);
void printVetor(int *v);


int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vetor1[SIZE] = {4,3,5,1,2};
	int vetor2[SIZE] = {4,3,5,1,2};
	//int vetor2[SIZE] = {1,2,3,5,4}; // 1 troca
	//int vetor2[SIZE] = {1,3,2,5,4}; // 2 trocas
	
	cout << "Vetores não ordenados" << endl;
	
	printVetor(vetor1);
	printVetor(vetor2);
	
	cout << "\nOrdenando com algoritmo original..." << endl;
	bubblesortOriginal(vetor1);

	cout << "\nOrdenando com algoritmo otimizado..." << endl;
	bubblesortOtimizado(vetor2);
	
	cout << endl;
	cout << "Vetores ordenados" << endl;
	
	printVetor(vetor1);
	printVetor(vetor2);
	
	return 0;
}

void bubblesortOriginal(int *v){
    int i,j,aux;
    int trocas = 0;
    int passagens = 0;
    
    for(i=SIZE-1;i>=0;i--){
        passagens++;
        for(j=0;j<i;j++){
        	if(v[j] > v[j+1]){
        		aux = v[j];
        		v[j] = v[j+1];
        		v[j+1] = aux;
        		trocas++;
			}
		} 
	//if(trocas == 0) break; 	
	cout << "passagem: " << passagens << " ;trocas   : " << trocas << endl; 
	trocas=0;		
    }
}



void bubblesortOtimizado(int *v){
    int i,j,aux;
    int trocas = 0;
    int passagens = 0;
    
    for(i=SIZE-1;i>=0;i--){
        passagens++;
        for(j=0;j<i;j++){
        	if(v[j] > v[j+1]){
        		aux = v[j];
        		v[j] = v[j+1];
        		v[j+1] = aux;
        		trocas++;
			}
		} 
	if(trocas == 0) break; // se não for executada nenhuma troca o array estará ordenado
	                       //  e o laço for é abandonado e a função bubblesort() retorna	
	cout << "passagem: " << passagens << " ;trocas   : " << trocas << endl; 
	trocas=0;		
    }
}


void printVetor(int *v){
	for(int i=0;i<SIZE;i++)
	    cout << v[i] << " ";
	cout << endl;
}

// fim de bubblesort_otimizado.cpp
