#include <iostream>

using namespace std;

//Constructors-------------------------------------
//Construtores são funções chamadas na inicialização dos objetos.
//Elas possuem o mesmo nome da classe
//Eles servem para poder passar valores nos atributos da classe, sem torna-los públicos.
//Sem tipo de retorno.
//Multiplos constructors são permitidos por class(overload)

//Destructors----------------------------------------
//Também possuem o mesmo nome da classe, porém são precedidos de ~.
//São chamados automáticamente quando um objeto é destruído.
//Não tem retorno nem parâmetros.
//Apenas um destructor é permito por classe
//Usado para liberar memória e fechar aqrquivos.

class Account {
    private:
    string name;
    double balance;
    
    //Constructors
    //É possível ter vários construtores em uma mesma função, com mesmo nome e recebendo parâmetros diferentes.
    //Assim, a criação do objeto se torna bastante flexível, pois adapta-se a necessidade da criação.
    public:
    Account();
    Account(string name, double balance);
    Account(string name);
    Account(double balance);

    //Destructor
    //Será chamado automáticamente pelo c++ quando um objeto sair do escopo ou um ponteiro que apontava para o objeto for deletado.
    ~Account();
};


//Quando um constructor não é criado na classe, o c++ cria um automáticamente para ainda ser possível inicializar objetos.
//Este é chamado de "default constructor" ou "no args constructor"
//Contudo, é uma boa prática CRIAR o default. Pois, os atributos terão valores conhecidos e não lixo
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
    }
};


//Constructors inicialization lists-------------------------

//O que acontece nos constructores acima é nada mais do que pegar uma variável(atributo) que já foi criado e atribuir um valor a ele.
//Ou seja, em Player, "name" é inicializada com lixo e depois recebe o valor passado pelo construtor.
//Assim, não é uma REAL inicialização.

//É ai que entra o constructor inicialization list, que por realmente fazer a inicialização com os valores passados, é mais eficiente.

class Player2{
    private:
    string name;
    int health;
    int xp;

    public:
    //constructor no args:
    //Os atributos são iniciados ANTES do corpo da função construtora.
    //A ordem passada no construtor não importa. As variáveis são inicializadas na ordem em que foram declarada na classe.
    Player2()
        : name {"None"}, health {0}, xp {0}{
    };   
};
 
//Delegating Constructors------------------------------------------------
//Utilizado para evitar repetição desnecessária de código.
//Quando temos vários constructors diferentes (overload constructors) estes repetem o mesmo código de inicializar as variáveis.
//Assim, podemos DELEGAR essa inicialização a um único constructor e chamar esse constructor nas variações.
//Ps: isso só funciona na initialization list.

class Player3{
    private:
    string name;
    int health;
    int xp;

    public:
    
    //Constructor que atribuirá valores a TODAS as variáveis ( que recebe a delegação)
    Player3(string name, int health, int xp)
        : name {name}, health {health}, xp {xp}{
    };   

    //Delegating constructors ( Aqueles que utilizam o constructor acima)
    //Ao invés de inicializar novamente, apenas passamos parametros para o constructor q inicializa.
    Player3()
    :Player3("none", 0, 0){
    };

    Player3(string name)
    :Player3(name, 0, 0){   
    };
};

//Default constructor parameters------------------------------------
//Podemos atribuir valores padrões aos argumentos dos construtores e dessa maneira, um único constructor faz o papel de vários.
//Nem sempre é possível utilizar esse recurso, mas funciona na maioria das vezes.


class Player4{
    private:
    string name;
    int health;
    int xp;

    public:
    
    //Constructor que atribuirá valores a TODAS as variáveis ( que recebe a delegação)
    Player4(string name = "none", int health = 0, int xp = 0)
        : name {name}, health {health}, xp {xp}{
    };   
};


int main(){

    //No args 
    Player3 p1;
    
    //one arg
    Player3 p2 {"Carlos"};
    

    //Ex de no-args constructor:
    //Player é um construtor criado automáticamente pelo c++.
    Player * enemy = new Player;
    delete enemy;

    return 0;
}