/********************************************************************
Nome: uniquePtr.cpp
Descricao: Demonstra como usar unique_ptr
Data: 20210824

arataca89@gmail.com
Aulas particulaes de programacao em C/C++ 
********************************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <memory>
using std::unique_ptr;
using std::make_unique;

#include <vector>
using std::vector;

class MyClass{
    public:        
        MyClass(int ii, double ff, string ss){
            i = ii;
            f = ff;
            s = ss;
            cout << "Construindo: " << s << "\n" << endl;            
        }

        ~MyClass(){
            cout << "Destruindo: " << s << "\n" << endl;
        }

        void print(){
            cout << "Inteiro: " << i << endl;
            cout << "Double : " << f << endl;
            cout << "String : " << s << "\n" << endl;

        }

    private:
        int i;
        double f;
        string s;
};


int main(){
    unique_ptr<MyClass> c1 = make_unique<MyClass>(1341, 11.85, "c1");
    auto c2 = make_unique<MyClass>(1989, 19.85, "c2");

    c1->print();
    c2->print();

    cout << "Transferindo c1 para c3:" << endl;
    unique_ptr<MyClass> c3;
    c3 = move(c1);   
    c3->print();
    //c1->print(); // ERRO; a propriedade foi movida para c3

    // namespace de teste
    {
        auto c4 = make_unique<MyClass>(1979, 3.14, "c4");
        c4->print();  
    }

    cout << "Inserindo os unique_ptr num vector\n" << endl;
    vector<unique_ptr<MyClass>> v;
    v.push_back(move(c2));
    v.push_back(move(c3));

    for(auto&& i: v){
        i->print();
    }

    return 0;
}

/********************************************************************
arataca89@gmail.com
Aulas particulaes de programacao em C/C++ 
********************************************************************/
