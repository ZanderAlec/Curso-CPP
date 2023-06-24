#include <iostream>

using namespace std;

int main(){

    /*Constantes são utilizadas quando usamos um valor no código que não se altera.
    A idéia é tornar o código mais legível para outros programadores ou para um futuro próximo em que voltemos a mexer no código.
    ex: podemos realizar uma multiplicação por 12, na qual 12 é o numero de meses no ano.

    resultado = valor * 12;

    O problema, é que 12 pode significar qualquer coisa, o que resulta em várias linhas de explicações
    ou uma confusão quanto ao  entendimento do código.

    Contudo, se usarmos uma constante, o código se torna bem mais amigável.

    const NumMesesAno = 12;

    resultado = valor * NumMesesAno;

    */

    //Existem 4 tipos de constantes no c++

    //Literal constants:
    const int x = 12; //é preciso especificar o tipo da constante.

    //NÃO UTILIZAR EM C++ MODERNO
    #define x = 12; //Jeito de declarar usado no C e no C++ antigo



    return 0;
}