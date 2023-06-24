#include <iostream>

using namespace std;

int main(){


    int int_vet[] {23,42,55};
    int *ptr_int {int_vet};

    //Aritimética de ponteiro apenas faz sentido quando lida com arrays.

    //++ e -- =============================================================================

    cout << *ptr_int << endl;

    ptr_int++;//Vai para o próximo elemento do array apontado pelo ponteiro

    cout << *ptr_int << endl;

    ptr_int--; //Vai para o elemento anterior do array apontado pelo ponteiro

    cout << *ptr_int<< endl;

    //=====================================

    // + e -
    
    int n = 2;
    
    //Incrementa o ponteiro para n
    //O que é feito na verdade é: n * sizeof(type)
    //Assim, independete do tipo do ponteiro, ele conseguirá ir para o próx elemnt.

    ptr_int += n ; 

    cout << *ptr_int << endl;

    //Mesma coisa, mas subtraindo.
    ptr_int -= n;

    //Determinando o número de elementos entre os dois ponteiros================
    //Não faço idéia do que essa porra faz.
    //Os ponteiros precisam ser do mesmo tipo.

    int int_vetor2 [] {88, 22, 33};
    int *ptr_int2 {int_vetor2};

    int result = ptr_int2 - ptr_int;
    
    cout << result << endl;

    //Comparando ponteiros=======================================================
    //pode ser feita usando == ou !=
    //ps: a comparação não é entre os VALORES dentro dos ESPAÇOS para os quais os ponteiros apontam
    //, mas sim verifica se estes ponteiros APONTAM PARA O MESMO ENDEREÇO.

    char a {'a'};
    char b {'b'};
    char *char_ptr {&a};
    char *char_ptr2 {&a};
    char *char_ptr3 {&b};

    //Aponta para o mesmo endereço:
    cout << (char_ptr == char_ptr2) << endl;

    //Não aponta para o mesmo endereço:
    cout << (char_ptr == char_ptr3) << endl;

    //É possível comparar os valores dentros dos espaços apontados pelo ponteiro.

    cout << (*char_ptr == *char_ptr2) << endl; //retorna verdadeiro

    int scores[] {100,95,89,68,-1};

    int *scores_ptr {scores};

    //Passa por todos os elementos do vetor apontado pelo ponteiro até que encontre -1.
    //É comum esse tipo de abordagem onde -1 é colocado no ultimo elemento para ser a condição de parada.
    while(*scores_ptr != -1){   
        cout << *scores_ptr++ << endl;
    }

    /*O que acontece entre << << são duas operações que podem ser declaradas simultaneas porque a prioridade delas é a mesma. Assim, a execução se dá da DIRETA PARA A ESQUERDA.
    Operações:
    *scores_ptr //Acessa o valor do endereço apontado
    scores_ptr++//Vai para o próximo elemento do vetor apontado;

    dada a ordem de prioridade, que é igual, primeiro é feito o incremento e depois é mostrado o valor.
    //Essa também é uma notação bem comum.

    */





    return 0;
}