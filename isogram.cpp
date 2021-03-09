/*
isogram.cpp

arataca89@gmail.com

CodeWars exercise:

An isogram is a word that has no repeating letters, consecutive or
non-consecutive. Implement a function that determines whether a
string that contains only letters is an isogram.

Assume the empty string is an isogram. Ignore letter case.

isIsogram "Dermatoglyphics" == true
isIsogram "aba" == false
isIsogram "moOse" == false -- ignore letter case

*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;


bool is_isogram(std::string str);


int main(){
    bool b;
    
    //b = is_isogram("");
    b = is_isogram("Dermatoglyphics");
    //b = is_isogram("aba");
    //b = is_isogram("moOse");
    
    cout << (b?"True":"False") << endl;
	
	return 0;
}


bool is_isogram(std::string str) {
	
	if(!str.length()) return false;
	
	char c;
	int i,j;
	
	int size = str.length();
	char buff[size];
	
	for(int i=0;i<size;i++)
	    buff[i] = str[i];
	
	for(int i=0;i<size-1;i++)
	    buff[i] = tolower(buff[i]);
	    
	for(i=0;i<size-1;i++){
	    c = buff[i];
		for(j=i+1;j<size;j++){
			if(c == buff[j])
			    return false;
		}
	}
	return true;	
} 

// end of isogram.cpp
