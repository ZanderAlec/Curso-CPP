#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

/*
L-values:
Objetos que ocupam uma localização(espaço) na memória e é endereçável(Podemos acessá-lo, pois possuem nomes).
ex:
*/

int x {100}; //X é um L-value.
//L-value reference:
int &ref = x; //ref é um L-value, pois faz referencia ao um l-value(x).

/*
R-values:
Tudo que não é um L-value, é um R-value.
ex:
*/

int y {200}; //"100" é um r-value
int z {200 + 10}; // "200 + 100" é um r-value
string j {"Viktor"}; //"viktor" é um r-value
int m {x+2}; //"x + 2" é um r-value. 


//Essa relação de L-value e R-value também ocorre com objetos.
//R-values são objetos temporários criados pelo compilador e aqueles criados por returns
//A diferença é que pode ter uma grande quantidade de overhead(custo de programação, tempo, compilação e execução) visto que os copy constructors estão sendo chamados várias e várias vezes.
//Fazendo cópias dos objetos temporários.
//O overhead é ainda maior quando os objetos possuem ponteiros.

//É ai que entram os MOVE CONSTRUCTORS que move o OBJETO ao invés de COPIAR.
//Se não forem fornecidos o compilador do c++ irá criar automáticamente.

//R-value references-> São referências pra r-values, no contexto atual, são referências para os objetos temporários.
//Declaração:

//l-value:
int &l_ref = x;  //referencia um l-value
//Muda x para 10.
//l_ref = 10;

//r-value 
int &&r_ref = 200;  //referencia um r-value
//Podemos atribuir 300 para r_ref, pois 300 é um r-value.
//r_ref = 300;  
//int &&r_ref = x; //erro.

//FUNÇÕES:
//Podem ter o mesmo nome (overload functions), pois recebem parâmetros diferentes.

//Espera um l-value.
void func(int &num){}

//Espera um r-value
void func(int &&num){}


class Move{
private:
    int *data; //ponteiro (exige deep copy)

public:
    //constructor
    Move(int d);
    //Copy constructor
    Move(const Move &source);
    //Destructor
    ~Move();

    //MOVE constructor
    Move(Move &&source); 
};

//Copy constructor
//Recebe um l-value.
Move::Move(const Move &source){
    data = new int;
    *data = *source.data;
};

//Move constructor:
//diferente do copy, source não é null, pois precisa apontar para null ao fim do processo de "move".
//Além disso, recebe um r-value, ao invés de um l-value.
Move::Move(Move &&source)   
    :data{source.data} {  //data agora aponta para o ENDEREÇO do objeto temporário.
    source.data = nullptr; //objeto temporário aponta para null
};


int main(){

    int b = 200;
    
    //Atribui um l-value
    func(b);
    //Dará erro:
    //func(200);

    //Atribui um r-value
    func(200);
    //Dará erro.
    //func2(b); 

    
    vector<Move> vec;

    /*Sem o move construtor:
        Serão criados 2 objetos temporários(r-values) e então COPIADOS(deep copy) para só então
        serem atribuídos ao índices do vector.

      Com o move constructor:
        o objeto atual(que receberia a cópia) recebe a cópia apenas do ENDEREÇO na HEAP onde estão os dados.
        e o objeto temporário é "nullificado".
        Dessa forma é bem mais eficiente.
    */
    vec.push_back(Move{10});
    vec.push_back(Move{20});

    return 0;
}