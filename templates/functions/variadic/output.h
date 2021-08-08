/********************************************************************
output.h
Template de função variádica clone de cout.
Exibe na tela os argumentos passados.
20210808
arataca89@gmail.com
Aulas particulares de programação em C++
********************************************************************/

#ifndef OUTPUT_H
#define OUTPUT_H

void output() {}; // caso mais simples da chamada recursiva

template<typename T>
void start(T x){
    cout << x << " ";
}

template<typename T, typename... Args>
void output(T first, Args... last) {
    start(first); // faz algo aqui ... 
    output(last...); // faz o mesmo recursivamente
}

#endif // OUTPUT_H

/********************************************************************
Como funciona a chamada a
    output("Teste de output", 1341, 3.14, 's', '\n');

É uma chamada recursiva.

1. chama     output("Teste de output", 1341, 3.14, 's', '\n')
2. que chama output(1341, 3.14, 's', '\n')
3. que chama output(3.14, 's', '\n')
4. que chama output('s', '\n')
5. que chama output('\n')
6. que chama output()

A função start() faz o que queremos que se faça com cada argumento.

arataca89@gmail.com
Aulas particulares de programação em C++
*********************************************************************/
