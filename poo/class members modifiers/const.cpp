#include <iostream>

using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;

    public:

    //Quando objetos constantes são instaciados, não podem ser modificados.
    //Dessa forma, qualquer método que for chamado pra esse objeto dará erro na compilação
    //Pois pode possivelmente modificar o objeto.
    //Assim, o modificador CONST serve para informar ao compilador que a função em questão NÃO MODIFICA o objeto.
    //E com isso o erro não ocorre.
    string get_name() const{
        //O código dentro de uma const function não pode modificar o objeto.
        return name;
    }

    //Visto que o objeto recebido está como constante, display_name não irá modificá-lo.
    //Contudo, ainda apresentaria um erro de compilação se get_name, não fosse const.
    void display_name(const Player &p){
        cout << get_name() << endl;
    }

    //constructor no args:
    Player(){
        name = "None";
        health = 0;
        xp = 0;
    }
};

int main(){

    return 0;
}