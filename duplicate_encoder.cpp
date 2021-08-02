/*
duplicate_encoder.cpp
arataca89@gmail.com
Aulas de programação em C++

Exercício do CodeWars:

The goal of this exercise is to convert a string to a new string
where each character in the new string is "(" if that character
appears only once in the original string, or ")" if that character
appears more than once in the original string. Ignore
capitalization when determining if a character is a duplicate.

entrada: testando
saída  : )(()((((

caractere aparece uma vez        => (
caractere aparce mais de uma vez => )

TESTES:
"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))((" 

*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

string encoder(string text);

int main(){
	string strin;

    cout << "Enter a string: ";
	cin >> strin;
	
	cout << "string   : " << strin << endl;
	cout << "encoding : " << encoder(strin) << endl;
 		
	return 0;
}


string encoder(string text){
	string encoded = text;
	int i,j,c=0;
	char ch;
	int index=0;
	
	for(i=0;i<text.size();i++){
		ch = text[i];
		c++;

		for(j=i+1;j<text.size();j++){
			if(text[j] == ch) c++;
		}
		if(c > 1){
            encoded[index++] = ')';			
		} 
		else{
			encoded[index++] = '(';
		}
		c = 0;
	}
	
	// analyzes the last character
	c= 0;
	for(i=0;i<text.size();i++)
		if(text[i] == text[text.size()-1]) c++;	
	if(c > 1) encoded[encoded.size()-1] = ')';
	
	return encoded;
}
// end of duplicate_encoder.cpp
