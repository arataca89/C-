/*
duplicateCount.cpp

arataca89@gmail.com

CodeWars exercise:

Write a function that will return the count of distinct
case-insensitive alphabetic characters and numeric digits
that occur more than once in the input string. The input
string can be assumed to contain only alphabets
(both uppercase and lowercase) and numeric digits.

Example
"abcde" -> 0 # no characters repeats more than once
"aabbcde" -> 2 # 'a' and 'b'
"aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
"indivisibility" -> 1 # 'i' occurs six times
"Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
"aA11" -> 2 # 'a' and '1'
"ABBA" -> 2 # 'A' and 'B' each occur twice
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;


//size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in);
void test(char *s, size_t retorno);
	
int main(){
	
    char s[] = "abcde";
	test(s,0);
    
    char s1[] = "aabbcde";
	test(s1,2);
	
    char s2[] = "aabBcde";
	test(s2,2);
	
    char s3[] = "indivisibility";
	test(s3,1);
	
    char s4[] = "Indivisibilities";
	test(s4,2);
	
    char s5[] = "ABBA";
	test(s5,2);

    char s6[] = "aA11";
	test(s6,2);

	return 0;
}


size_t duplicateCount(const char* in){
	
	char c;
	int i,j,t,cont=0;
    int ok = 1;
	
	size_t size = strlen(in);
	char buff[size];
	
	char letra[size];//characters
	size_t qtde[size];// occurrences
	
	for(i=0;i<size;i++){
		letra[i]=' ';
		qtde[i]=0;
	}
	
	for(i=0;i<size;i++)
	    buff[i] = in[i];	
	    
	// convert string to lowercase
	for(i=0;i<size;i++)
	    buff[i] = tolower(buff[i]);
    
	for(i=0;i<size;i++){
	    c = buff[i];
	    cont++;
		for(j=i+1;j<size;j++){
			if(buff[j]==c)
			    cont++; 		
		}
        
		for(t=0;t<size;t++){
			// character was counted; "ok" flag disabled
			if(letra[t] == c){
				ok = 0;
			}
		}

		if(ok){
		    letra[i] = c;
		    qtde[i] = cont;
		}
        cont=0;
        ok=1;
	}
    letra[size-1] = buff[size-1];
    qtde[size-1] = 1;
	
	cont=0;
	for(i=0;i<size;i++){
		if(qtde[i]>1) cont++;
	}
	
	return cont;
}

void test(char *s, size_t retorno){
	size_t n;
	n = duplicateCount(s);
    printf("%s : %d : %d\n",s,n,retorno);	
}
// end of duplicateCount.cpp
