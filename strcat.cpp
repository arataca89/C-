// strcat.cpp
// arataca89@gmail.com
// 20210317

// Implementação de strcat()

/*
A função de biblioteca strcat() concatena duas strings. Ela pertence
ao arquivo de cabeçalho <cstring> (string.h). Esta função adiciona
uma cópia de um string origem numa string destino.

O caractere de nulo na string destino é sobrescrito pelo primeiro
caractere da string origem e  um caractere nulo é incluído ao final
da nova string formada pela concatenação das duas no destino.

Este exercício é uma implementação desta função.
*/

#include <iostream>
using std::cout;
using std::endl;

#include <clocale> // locale.h
using std::setlocale;


char * strcat ( char * destination, const char * source );


int main(){
	setlocale(LC_COLLATE,"");
	setlocale(LC_CTYPE,"");

    char *stringcat;
    
	char string1[] = "A melhor maneira de aprender a programar";
	char string2[] = " é programando.";
	
	cout << "string1: " << string1 << endl;
	cout << "string2: " << string2 << endl;
	
	stringcat = strcat(string1,string2);
	
	cout << "string1 após chamada de strcat(): " << string1 << endl;
	
	return 0;
}


char * strcat ( char * destination, const char * source ){
	
    char *inicio;
    
    inicio = destination; // aponta para o inicio do array destination

    // vai até o fim do array 
    while(*destination++)
    	;

	destination--; // volta uma posição pra livrar o caractere nulo ('\0')
	
	// insere a string "source" no fim da string "destination"
	while(*source){
		*destination = *source;
		destination++;
		source++;		
	}
	
	*destination = '\0'; // insere o caracter nulo
	
	destination = inicio; // aponta para o início da string "destination" novamente
	
	return destination;
		
}

// fim de strcat.cpp
