#include <iostream>

using namespace std;

int main(){

    //SIZE_T é um tipo de dado semelhante a um unsigned int, ou seja, armazenará um valor inteiro e apenas valores positivos.
    //Por só armazenar valores positivos, o size_t é utilizado para guardar tamanhos. Então, malloc, realloc, sizeof tem seus retornos armazenados no tipo size_t.
    //A vantagem em relação a um unsigned int é que o tamanho máximo do size_t depende do compilador. Assim, ele no mínimo terá o tamanho de um inteiro e no máximo terá o tamanho do MAIOR OBJETO SUPORTADO PELO COMPILADOR.

    //Então a idéia é utilizar size_t quando for fazer calculo que se deseja resultados positivos, tamanhos etc;
    //pode ser usado como um substituto para o int dentro do for.
    //Pode ser usado como substituto do int para armazenar os valores de sizeof e assim por diante.

    return 0;
}