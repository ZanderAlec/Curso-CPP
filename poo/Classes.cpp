#include <iostream>
#include <string.h>
#include <vector>

//Classe declarada em outro arquivo
#include "Account.h"

using namespace std;

//Modificadores de acesso-----------
/*
Public:
    Acessível de qualquer lugar

Private:
    Acessível apenas por membros da mesma classe ou "amigos" da classe.

Protected:
    Usado com "inheritance" (subclass).
*/
//PS: é possível utilizar MAIS DE UM TIPO de modificador por classe
//Geralmente, private/protected é para atributos, para evitar que sejam modificados por qualquer parte do programa
//E public são utilizados em métodos, estes irão conseguir acessar os atributos privados e manipulá-los.
//Assim, se algo não tiver o valor que devia, o único lugar que pode ter ocorrido o erro são nos métodos da própria classe.

//É uma boa prática iniciar o nome das classes com letras maiúsculas
class Player{
//Os objetos só conseguirão acessar os atributos e métodos caso eles estejam públicos.
public:
    //Encapsulação: Colocar variáveis e funções juntas.
    //Atributos
    string name;
    int health;
    int xp;

    //métodos (Podem ser implementados dentro ou fora da classe)
    void talk(string text){
        cout << name << ": " << text <<endl;
    };

    bool is_dead();
};

//A implementação pode ser fora, porém a função precisa ser declarada dentro da classe.
//É muito útil quando o programa fica muito grande.
bool Player::is_dead(){
    if(health == 0)  return true;

    return false;
}; 

int main(){

    Player jorge;
    Player carlos;
    
    //cria um player dinamicamente. Pode ser deletado a qualquer momento.
    Player * enemy = new Player();
    delete enemy;

    //Objetos podem ser usados como qualquer outro tipo de dado

    //Array de players (precisam ter sido declarados antes)
    Player players[] {jorge, carlos};

    //Vector de player
    vector <Player> playerss {jorge};


    //Acessando elementos dos objetos--------------------------------------------------------

    jorge.name = "Jorge";
    jorge.health = 100;
    jorge.xp = 12;
    jorge.talk("Foda");

    //Ponteiros o acesso pode ser feito de duas formas------
    //1. deferencia
    //enemy não é um objeto, mas sim um ponteiro para um objeto.
    (*enemy).name;

    //2. arrow operator
    enemy->name;
    return 0;
}