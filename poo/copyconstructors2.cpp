#include <iostream>

/*Copy constructors
São usados quando o objetos são COPIADOS, pois o c++ precisa criar um novo objeto a partir de um objeto já existente.
Copias são feitas quando:
    Objetos são passados por VALOR como parâmetros
    Retornar um objeto por VALOR de uma função
    Construir um objeto baseado em outro de uma mesma classe.

É possível construirmos o nosso próprio copy constructor, caso não o façamos, o c++ irá criar um automáticamente.
*/



class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    //constructor no args:
    Player(){
        name = "None";
        health = 0;
        xp = 0;
    };

    Player(string name, int health, int xp)
        : name {name}, health {health}, xp {xp}{
    };   
};

//Exemplos do uso:
//função que imprime o objeto
void display_player(Player p){
    //p é um OBJETO que foi passado por valor, assim, uma CÓPIA do p original foi feito para que seja
    //acessado nessa função.
    //Essa cópia é feita usando o copy constructor.
}

//Exemplos do uso:
//Cria um inimigo e retorna a cópia dele
Player create_super_enemy(){
    Player an_enemy{"Super Enemy", 1000,1000};
    return an_enemy; //Retorna a CÓPIA do objeto.
}


//Criando copy constructors----------------------------------------------------
//O único cenário em que é necessária a criação de um copy constructor é quando se utiliza raw pointers.
//Pois, o copy constructor default do c++ irá copiar apenas o ponteiro(shallow copy), mas não o dado(deep copy) para o qual ele aponta.
//Assim, se utilizar pointers deve se criar, caso contrário o default funciona bem.

//PS: o construtor deve ter todos os parâmetros como constantes e por REFERÊNCIA.
//Deve ser referência, pois já estamos copiando, portanto precisamos do valor e não criar outra cópia.
//Deve ser const pra prevenir QUALQUER MODIFICAÇÃO, pois estamos copiando da foto e não manipulando-a.

//Shallow constructor:----------------------------------------------------
class Shallow{
    private:
    string name;
    int health;
    int xp;

    public:
    //constructor no args:
    Shallow(){
        name = "None";
        health = 0;
        xp = 0;
    };

    Shallow(string name, int health, int xp)
        : name {name}, health {health}, xp {xp}{
    };   

    //Copy constructor
    Shallow(const Shallow &source)
        :name{source.name},
        health{source.health},
        xp{source.xp}{
    };
};

//Deep constructor:----------------------------------------------------

//A classe "Deep" possui um ponteiro.
//Portanto precisamos implementar o construtor de maneira diferente para evitar o shallow copying.
class Deep{
    private:
    int *data;

    public:
     //Constructor
    Deep(int d){
        data = new int; //Aloca espaço
        *data = d; //Coloca o dado passado no espaço
    };

    //Copy constructor
    Deep(const Deep &source){
        data = new int; //Aloca espaço
        *data = *source.data;//Copia o valor
    }

    //Destructor
    ~Deep(){
        delete data; //Libera espaço
    };
};

using namespace std;

int main(){
    //Exemplos do uso:
    //Criando um objeto de um pré existente:
    Player hero{"Hero", 100, 100};
    Player another_hero{hero};//another_hero é uma CÓPIA de hero.

    return 0;
}