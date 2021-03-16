/*
longestWord.cpp

arataca89@gmail.com

Coderbyte exercise: 

https://www.coderbyte.com/editor/Longest%20Word:Cpp

Longest Word

Have the function LongestWord(sen) take the sen parameter being
passed and return the largest word in the string.
If there are two or more words that are the same length, return
the first word from the string with that length.
Ignore punctuation and assume sen will not be empty.

Examples

Input: "fun&!! time"
Output: time

Input: "I love dogs"
Output: love
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::getline;

#include <string>
using std::string;


int countWords(const string);
string biggerWord(const string line, const int n);

int main(){
	// nr
	// indice inicial
	// indice final
	// tamanho da string
	
	//string texto("splitString divide a string");
	int n;		
	string texto, maior;
	
	cout << "Entre com o texto: ";
	getline(cin,texto);	
	cout << endl;		
	cout << texto << endl;	
    n = countWords(texto);
    cout << n << " palavras" << endl;
	
	maior = biggerWord(texto,n);
			
	cout << "maior palavra: " << maior << endl;
			
	return 0;
	
}


// Recebe uma string e a quantidade de palavras existentes
// e retorna a palavra maior
string biggerWord(const string line, const int n){
    int i,j,t,big;
	string words[n];
	char buffer[n];
	
	j=0;
	t=0;		
	for(i=0;i<line.length();i++){
		buffer[j++] = line[i];
		if(line[i] == ' '){
			buffer[--j] = '\0';
			words[t++] = buffer;
			j=0;			
		}		
	}
	buffer[j] = '\0';
	words[t] = buffer;
	
    big = 0;
	for(i=0;i<n;i++){
		if( words[i].length() > words[big].length() )
		    big = i;
    }
    
	return words[big];

}


// Recebe uma string formada por palavras separadas por um espaço
// e retorna o número de palavras da string
// Exemplo: 
// "um dois tres" retorna 3
// "testando a função countWords" retorna 4
int countWords(const string text){
	int c=0;
	for(int i=0;i<text.length();i++){
	    if(text[i] == ' ')
		    c++;		
	}
	return c+1;	
}

// end of longestWord.cpp
