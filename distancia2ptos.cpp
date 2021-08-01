// distancia2ptos.cpp
// 20210801
// arataca89@gmail.com
// Aulas de programação em C++

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cmath>
using std::sqrt;
using std::pow;

double distancia2pontos (double x1, double y1, double x2, double y2){
    return sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
}


int main(){
    double x1,x2,y1,y2;
    x1 = 2;
    y1 = 3;
    x2 = 1;
    y2 = -2;

    cout << "Distancia entre (" << x1 << "," << y1 << ") e ";
    cout << "(" << x2 << "," << y2 << ") : "; 
    cout << distancia2pontos(x1,y1,x2,y2) << endl;

    return 0;
}

// fim de distancia2pontos.cpp

/*
SAIDA:

Distancia entre (2,3) e (1,-2) : 5.09902

*/
