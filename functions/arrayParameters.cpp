#include <iostream>

using namespace std;

//É assim que se passa array como parâmetor.
//Nota: O array não é copiado como no caso de variáveis, mas sim a sua posição na memória.
//Visto que, arrays em c e c++ são ponteiros.
//Como a função recebe o endereço, ela não sabe quantos elementos existem no array é por isso que é preciso passar o TAMANHO como parâmetro.
void print_array(int numbers[]);

//Visto que o nome do array é um ponteiro, podemos modificá-lo diretamente, ao invés de modificar a cópia como no caso de funções.
//Isso pode ser necessário em alguns casos, mas também um problema se a função apenas lê o array.
//Para evitar modificações nesse cenário indesejado podemos usar const.

//Dessa forma, informamos que o array é constante, ou seja, não pode ser modificado.
void print_array2(const int numbers[]);

int main(){


    return 0;
}