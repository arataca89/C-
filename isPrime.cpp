// isPrime.cpp
// arataca89@gmail.com
// 20210320
// Implementa a função isPrime() que verifica se um número é primo

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <clocale>
using std::setlocale;

int isPrime(int); //recebe um int e retorna 0(não é primo) ou 1(é primo)

int main(){
	setlocale(LC_ALL,"");
	
	int nr;
	
	cout << "Entre com o número: ";
	cin >> nr;
	
	if( isPrime(nr) )
	    cout << nr << " é primo" << endl;
	else
	    cout << nr << " não é primo" << endl;
	
	return 0;
	
}


// retorna 0 se o nr não é primo
// retorna 1 se nr é primo
int isPrime(int nr){
	
	int divisor = 2;
	
	while(divisor < nr){
			
		if(nr % divisor == 0)
			return 0;				
		else
		    divisor++;
	}
	return 1;
		
}

// end of isPrime.cpp
