#include <iostream>
#include <string.h> //Bilioteca para usar métodos de string tais como strcpy

#include <cstdlib> //Biblioteca para converter strings para outros tipos. 

using namespace std;

int main(){

    //C-style Strings são as strings padrões do c, ou seja, aquelas que são finalizadas com '0' e/ou null;
    //Essas string são indexadas, ou seja, o texto nada mais é do que um vetor de caracteres que podem ser acessados indidualmente a partir do index.

    //String literal -> é a string colocada entre aspas duplas. ex: "essa porra aqui"
    //O caracter null é automáticamente colocado pelo c++ no final das strings literals.

    //As strings precisam ser terminas com null.
    //frank possui 5 char, porém o c++ alocou o espaço de 6 indexes, cujo último é '\0'
    char name[] {"frank"}; 

    //Não apresentará erro, mas será um problema, pois agora não existe mais o caracter de terminação, visto que o array é de tamanho fixo.
    name[5] = 'y';

    //Quando criamos uma string é importante que ela seja inicializada. Pois, o computador colocará lixo que pode ou não ser um caracter de finalização. Assim, muita coisa pode ser printada por muito tempo ou nada será printado.
    //Além disso, é possível usar literals pra inicializar uma string, mas o mesmo não funciona caso tentemos em outra parte do programa.

    char my_name[8] {"Oliver"}; //Funciona
    char my_name2[8] ;

    //Pois, é um VETOR de caracteres, assim cada caracter deveria ser passado índice a índice.
    //my_name2 = "Oliver"; //Erro

    //Inicializar não quer dizer que precisamos atribuir valores, podemos inicializa-las como vazias para quando forem chamadas, caso ainda não tenham valores não irão mostrar nada.

    char my_name3[8] {};//Inicializada vazia;

    cout << my_name2 << endl; //  Não inicializada mostrará lixo
    cout << my_name3 << endl; //inicializada não mostrará nada

    //Para fazer isso existe a strcpy direto da biblioteca padrão do c

    strcpy(my_name2, "Oliver"); //Funciona


    char full_name[50] {};


    cout << "Insira seu nome completo" << endl;
    cin >> full_name; //Cin para a leitura quando pega espaço, assim independente de quantos nomes forem digitados pelo usuário ele só pegará o primeiro.
    cout << full_name << endl;

    //getline é um método de cin que permite ler toda a linha até um limite de caracteres. Assim, podemos ler o nome todo independente do espaço.
    cin.getline(full_name, 50);
    cout << full_name << endl;

    




    return 0;
}