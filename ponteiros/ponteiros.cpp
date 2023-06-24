#include <iostream>

using namespace std;

int main(){

    //declarando ponteiros:
    //É preciso, assim como variaveis, iniciar os ponteiros. Caso contrário, eles terão lixo neles.
    //nullptr significa inicializar o ponteiro como 0. Ou seja, não aponta pra endereço nenhum.
    //Nota: OS ponteiros precisam ser do mesmo tipo do elemento para o qual eles apontam.

    int * p_int {};
    char *p_char {nullptr};
    string *string_ptr {nullptr};

    //Operador de endereço: &
    //usado para acessar o endereço de alguma variável;

    //nota, ao usar sizeof em todos os ponteiros com tipos diferentes, todos retornarão 4.
    //O motivo é que o tamanho da variável PONTEIRO é diferente do tamanho do elemento para o qual ele aponta.

    //Printando o valor de um ponteiro:

    int score = 100;
    int score2;
    int *p_score {&score};

    //Para printar o valor de um ponteiro utiliza-se *

    cout << *p_score << endl; //100

    //O mesmo pode ser feito para alterar o valor contido no endereço apontado.

    *p_score = 200; //Altera o valor do endereço armazenado
    p_score = &score2; //Altera para onde o ponteiro aponta.

    cout << score << endl; //200

    //Possíveis problemas com ponteiros--------------------------------------------

    //Ponteiros não inicializados -> Estes apontam para QUALQUER endereço e dessa forma uma informação importante pode ser apagada ou modificada.
    //ponteiros pendurados -> Estes apontam para um dado que já não é mais acessível.
                        //  Ex: 2 ponteiros apontam p/o memso endereço, mas um deles liberou a memória.
                        // Ex2: retornar um ponteiro que apontava para uma variável local.

    //new fail -> Não verificar se o new foi bem sucedido ao alocar memória.
    //Memory leak -> Acontece quando se esquece de liberar a memória alocado após esta não ser mais necessária. 
                //  Caso isso aconteça, esse endereço de memória fica INUTILIZÁVEL e não pode mais ser acessado.
                               

    return 0;
}