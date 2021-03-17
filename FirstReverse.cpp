// FirstReverse.cpp
// arataca89@gmail.com
// 20210317

// Coderbyte exercise:
// Have the function FirstReverse(str) take the str parameter being
// passed and return the string in reversed order.
// For example: if the input string is "Hello World and Coders" then
// your program should return the string "sredoC dna dlroW olleH".

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

string FirstReverse(string str) {
    
	int size = str.length(); 
	
	string buffer = str;
	
	int i,j=0;	
    for(i=size-1;i>=0;i--)
    	buffer[j++] = str[i];
    
    buffer[j]='\0';
    
    for(i=0;i<size;i++)
        str[i] = buffer[i];    
	
    return str;

}


int main(){
	
	string s = "string";

    cout << "string original        : " << s << endl;
    
	cout << "apos chamada a strrev(): " << FirstReverse(s) << endl;	

	return 0;
}

// end of FirstReverse.cpp
