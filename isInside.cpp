// isInside.cpp
// 20210801
// arataca89@gmaail.com
// Aulas de programação C++

#include <iostream>
using std::cout;
using std::endl;

// Se x estiver entre menor e maior retorna true; senão retorna false
bool isInside(double menor, double maior, double x){
    return (x - menor) * (x - maior) <= 0;
}

int main(){
    double menor = -1.5;
    double maior = 2.0;

    cout << "menor: " << menor << endl;
    cout << "maior: " << maior << endl;

    cout << 0 << " esta entre " << menor << " e " << maior << "? ";
    cout << isInside(menor, maior, 0) << endl; // 1

    cout << -2.0 << " esta entre " << menor << " e " << maior << "? ";
    cout << isInside(menor, maior, -2.0) << endl; // 0

    cout << 2.5 << " esta entre " << menor << " e " << maior << "? ";
    cout << isInside(menor, maior, 2.5) << endl; // 0

    return 0;
}

// fim de isInside.cpp

/*
SAIDA:

menor: -1.5
maior: 2
0 esta entre -1.5 e 2? 1
-2 esta entre -1.5 e 2? 0
2.5 esta entre -1.5 e 2? 0

*/
