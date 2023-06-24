#include <iostream>

using namespace std;

//Static é um atributo que pode ser atribuido tanto ao métodos quanto atributos da classe.
//Ele indica que o elemento em questão não faz parte de nenhum objeto em específico, mas sim da classe daquele objeto.
class Player{
    private:

    //name, health e xp fazem parte do objeto, o "player1", "player2" terão nomes que dizem jus apenas a eles.
    string name;
    int health;
    int xp; 

    //num_players é global para todos os objetos que sejam do tipo "Player", não pertencendo espeficiamente a nenhum deles.
    //Ou seja, terá o MESMO VALOR para todos.
    //Se um objeto modifica-lo, todos sofrerão essa modificação.
    static int num_players;

    public:
    //Para acessar atributos com "static", a função precisa ser static também.
    //métodos estáticos não conseguem acessar atributos e métodos não estáticos.
    static int get_num_players(){
        return num_players;
    };

    //constructor no args:
    Player(){
        name = "None";
        health = 0;
        xp = 0;
        ++num_players;
    }

    //Destructor
    ~Player(){
        --num_players;
    }
};

//Inicializando um "static attribute":
//Só pode ser feito uma vez.
//Deve ser feita fora da main e em um arquivo .cpp
int Player::num_players {0};


//Métodos estáticos podem ser acessados sem precisar instaciar um objeto.
void display_active_players(){
    cout << Player::get_num_players << endl;
}

int main(){
    

    return 0;
}