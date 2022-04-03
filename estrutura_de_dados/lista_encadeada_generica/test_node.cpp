/********************************************************************
 * Arquivo  : test_node.cpp
 * Data     : 20220324
 *  
 * Teste da classe Node.
 * 
 * arataca89@gmail.com
 * Aulas particulare de programacao C/C++
 * *****************************************************************/
#include <iostream>
using std::ostream;
using std::cout;

#include <string>
using std::string;

#include "lista_encadeada.hpp"

class MyClass{
    friend ostream& operator<<(ostream& output, MyClass& obj){
        output << "[" << obj.n << ", " << obj.d << ", " << obj.s << "]";
        return output;
    };

    public:
        MyClass(int a, double b , string c): n(a), d(b), s(c){};
        ~MyClass(){};
        int n;
        double d;
        string s;
};

int main(){
    cout << "\nTestando a classe Node\n\n";
    cout << "DADOS\tPROXIMO\n";
    Node<int> node1 = Node<int>(1985);
    cout << node1.dados() << '\t' << node1.proximo() << '\n';

    Node<double> node2 = Node<double>(3.14);
    cout << node2.dados() << '\t' << node2.proximo() << '\n';

    Node<char> node3 = Node<char>('Z');
    cout << node3.dados() << '\t' << node3.proximo() << '\n';

    Node<string> node4 = Node<string>("Zurg");
    cout << node4.dados() << '\t' << node4.proximo() << '\n';

    MyClass mc1 = MyClass(1978, 2.65, "Buzz");
    Node<MyClass> node5 = Node<MyClass>(mc1);

    MyClass mc2 = node5.dados();
    cout << "\nDADOS  : " << mc2 << '\n';
    cout << "PROXIMO: " << node5.proximo() << "\n";
    
    return 0;
}
/********************************************************************
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++
 * *****************************************************************/