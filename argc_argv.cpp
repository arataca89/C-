/*
argc_argv.cpp
20210120
arataca89@gmail.com

Exercício que exibe a quantidade e os argumentos passados na linha de comando

Referência:
http://www.cplusplus.com/articles/DEN36Up4/

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
int argc => quantidade de argumentos passados na linha de comando
char* argv[] => array com os argumentos
argv[0] refere-se ao programa propriamente dito
*/
int main(int argc, char* argv[]){
	
	cout << "Programa :" << argv[0] << endl;
	
	cout << "Foram passados " << argc << " argumentos" << endl;
	
	cout << "Argumentos passados :" << endl;
	
	for(int i = 1; i < argc; i++){
		
		cout << argv[i] << " "; 
	}
	
	return 0;
}

// end
