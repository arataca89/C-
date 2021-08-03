/*
countBits.cpp
arataca89@gmail.com
Aulas particulares de programação C++ 

CodeWars exercise:

Write a function that takes an integer as input, and returns the
number of bits that are equal to one in the binary representation
of that number. You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010,
so the function should return 5 in this case
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::_Exit;

#include <sstream>
using std::istringstream;

#include <string>
using std::string;


unsigned int countBits(unsigned long long n);


int main(){
	unsigned long long nr;
	string nrStr;

	cout << "Entre com o numero: ";
	cin >> nrStr;

    // validando a entrada
    if( nrStr[0] == '-') {
    	cout << "invalid input" << endl;
    	_Exit(EXIT_FAILURE);
	}
    
    for(int i=0;i<nrStr.length();i++){
    	if( !isdigit(nrStr[i]) ) {
    	   cout << "invalid input" << endl;
    	   _Exit(EXIT_FAILURE);		
		}
	}
    
    // convertendo a entrada string em numero
    istringstream convert(nrStr);     
	convert >> nr;
	
    cout << "Nr de 1s no binario: " << countBits(nr) << endl;
	
	return 0;
}


unsigned int countBits(unsigned long long n){ 
    
    unsigned int bits = 0;
    
    // array to store binary number 
    unsigned long long binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        if( binaryNum[i] == 1 ) bits++;            
        n = n / 2; 
        i++; 
    } 
  
    // setting binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        binaryNum[j];    

    return bits;
} 

// end of countBits.cpp
