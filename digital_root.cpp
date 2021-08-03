/*
digital_root.cpp
arataca89@gmail.com
Aulas particulares de programação C++

CodeWars exercise:

Digital root is the recursive sum of all the digits in a number.

Given n, take the sum of the digits of n.
If that value has more than one digit, continue reducing in this way
until a single-digit number is produced.

The input will be a non-negative integer.

Examples
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <sstream>
using std::stringstream;

#include <string>
using std::stoi;
using std::string;

#include <stdlib.h>

int digital_root(int n);


int main(){
    int n,r;
	cout << "Entre com um inteiro positivo: ";
	cin >> n;	
	
	if(n < 0) exit(0);
	
	r = digital_root(n);
	
	printf("%d\n",r);
	
	return 0;
}

int digital_root(int n){
    int nr,aux,i,x;    
    stringstream buff; 
    
    aux = n;
    
    while(aux>=10){
	    nr=0;
	    buff << aux;  
	    string nrstr;  
	    buff >> nrstr; 
		//cout << "nrstr: " << nrstr << endl; 
		for(i=0;i<nrstr.length();i++){		
			//cout << nrstr[i] << endl;		
			switch(nrstr[i]){
				case '0':
					x=0;
					break;
				case '1':
					x=1;
					break;
				case '2':
					x=2;
					break;
				case '3':
					x=3;
					break;
				case '4':
					x=4;
					break;
				case '5':
					x=5;
					break;
				case '6':
					x=6;
					break;
				case '7':
					x=7;
					break;
				case '8':
					x=8;
					break;
				case '9':
					x=9;
			}		
			nr += x;
		} 
	    
	    //cout << "soma: " << nr << endl;    
	    aux = nr;
	    buff.clear(); // clear buff variable
    
   }

	return aux;
}

// end of digital_root.cpp
