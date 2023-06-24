#include <iostream>

using namespace std;

int main(){
    
    //new -> Palavra reservada para alocar memória na heap; 
    //ps: terá lixo no spaço alocado até que ele seja inicializado.

    int *int_ptr {nullptr};


    int_ptr = new int; //Aloca um espaço na heap do tamanho de um inteiro e coloca um ponteiro para apontar para esse endereço.

    int_ptr = new int[10]; //Aloca um array de inteiros na heap com 10 espaços.


    //delete -> Desaloca o espaço reservado na memória;

    delete int_ptr;

    delete [] int_ptr; //Deleta todo o array de elementos

    //Relação entre arrays e ponteiros===========================

    //O nome de um array é um ENDEREÇO que aponta para o PRIMEIRO ELEMENTO DO ARRAY.
    //Um ponteiro, é uma variável que aponta para um endereço;

    //Assim, tudo que pode ser feito com um array pode ser feito com um ponteiro, desde que ambos apontem para o mesmo tipo.

    int scores [] {100, 95, 89};
    int *score_ptr {scores};

    cout << scores << endl;  //Mostrará o endereço do primeiro elemento.
    cout << *scores << endl; //Mostrará 100

    cout << score_ptr[2] << endl; //Mostrará 89

    return 0;
}