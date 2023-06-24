#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    //range-based for loop é um jeito de passar por todos os índices de um array sem precisar saber o tamanho total dele.
    //O for vai percorre todo array até o seu final e então encerrar o laço.
    //É um recurso adicionado no cpp moderno.

    int scores[] {100,90,97};

    //Deve ser criada uma variável que vai receber os valores da coleção a cada iteração do laço.
    //também, a coleção que estará sendo acessada.
    //Nesse caso, foi criado a variável score que irá receber os indices do array scores.
    for(int score: scores){
        cout << score << endl;
        //printará 100, 90 e 97.
    }

    cout << endl;

    //Não é obrigatória definir o tipo da variável que receberá os valores da coleção.
    //É possível usar o operador AUTO que fará o compilador deduzir por se mesmo o tipo.
    for(auto score: scores){
        cout << score << endl;
    }   

    cout << endl;

    //É possível prover a coleção diretamente no loop
    //A única problemática é que o loop terá que descobrir o tamanho enquanto roda.
    for(auto ex: {1,2,3,4,5}){
        cout << ex << endl;
    } 

    cout << endl;

    //É possível iterar sobre strings, visto que string nada mais é que uma coleção de caracteres.
    for(auto ex: "Oliver"){
        cout << ex << endl;
    }


    //Referencia-------------------------------------------

    vector <string> nomes {"Oliver", "Cris", "Micheal"};

    //Quando criamos dessa forma, ref recebe a CÓPIA do valor do índice atual e é essa cópia que é manipulada.
    //Semelhante a passagem por valor nas funções.
    for(auto ref: nomes){
        cout << ref;
    }

    cout << endl;

    //Portanto, tentar alterar o valor desse vector não irá resultar em nada.
    //Pois, estmaos manipulando apenas a CÓPIA.
    for(auto ref: nomes){
        ref = "boi";
    }

    //Para alterar, precisamos utilizar REFERÊNCIA.(semelhante a funções)
    //Agora, todo o vetor será modificado.
    for(auto &ref: nomes){
        ref = "boi";
    }

    //Assim, para tornar o for mais EFICIÊNTE, é interessante utilizar referência, ao invés de valor.
    //PORÉM, é possível que, sem querer, o programa por algum motivo modifique o valor original.
    //Podemos prevenir esse erro de acontecer despercebido:
    //Utilizando o const, o compilador dará erro e saberemos que o valor está sendo mudado sem nosso intento.
    for(auto const &ref: nomes){
        //ref = "boi"; //APRESNETA ERRO
    }

    return 0;
}