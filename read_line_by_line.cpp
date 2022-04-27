/********************************************************************
Arquivo     : read_line_by_line.cpp
Descricao   : Demonstra como abrir um arquivo e ler linha por linha.
Data        : 20220427

Ultima atualizacao: 20220427

arataca89@gmail.com
Aulas particulares de programacao em C/C++ 
********************************************************************/
#include <iostream>
using std::cerr;
using std::cout;

#include <fstream>
using std::ifstream;

#include <iomanip>
using std::setw;
using std::setfill;

#include <cstdlib>

#include <string>
using std::string; 

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "USO: " << argv[0] << " [arquivo]\n";
        exit(EXIT_SUCCESS);
    }

    ifstream input_file(argv[1]);
    if (!input_file.is_open()) {
        cerr << "ERRO ao tentar abrir o arquivo " << argv[1] << '\n';
        return EXIT_FAILURE;
    }

    string line;
    int line_number = 0;

    while(getline(input_file, line)){
        cout << setw(4) << setfill('0') << ++line_number << ": " << line << '\n';
    }

    return 0;
}
/********************************************************************
arataca89@gmail.com
Aulas particulares de programacao em C/C++ 
********************************************************************/

