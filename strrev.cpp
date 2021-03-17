// strrev.cpp
// arataca89@gmail.com
// 20210317

// Implementação da função strrev()

// strrev() é uma função que não faz parte da bibioteca padrão.
// Ela fazia parte de algumas versões antigas do Microsoft C.
// A função recebe uma string e a retorna invertida.
// Exemplo:
// entrada: "string"
// saída  : "gnirts"
 

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <cstdlib>
using std::exit;

char *strrev(char *str);


int main(){
	setlocale(LC_COLLATE,"");
	setlocale(LC_CTYPE,"");
	
	char s[] = "string";
	
    cout << "string original        : " << s << endl;
	cout << "após chamada a strrev(): " << strrev(s) << endl;	

	return 0;
}


char *strrev(char *str){
    int i,j;    
    int size = strlen(str);

    char buffer[size];
	
	j=0;
	
    for(i=size-1;i>=0;i--)
    	buffer[j++] = str[i];
	
    buffer[j]='\0';
    
    for(i=0;i<size;i++)
        str[i] = buffer[i];

    return str;
}

// fim de strrev()
