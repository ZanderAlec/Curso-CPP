
 /*
    Identificadores são diferentes de palavras reservadas
    Identificadores-> Palavras criadas pelos programadores, nomes de variáveis, nomes de funções, são exemplos de identificadores.
    Palavras reservadas(keywords) -> São palavras proprías e imutáveis da própria linguagem. Essas palavras tem significados e funções específicos que não podem ser alterados pelo programador.
*/

/*Preprocessor (pré-processadores) -> É um programa que processa o código-fonte(o código do programa) antes que o compilador o veja.
Ou seja, atua antes do programa ser compilado.
Pré-processadores são identificados  por serem antecipados po "#"
ex: #include
Funções:
    1-remove todos os comentários substituindo-os por um único espaço vazio
    2-Procura por diretivas de pré-processadores e as executa. São linhas que começam com "#" ou "simbolo de libra".
        #include <iostream>, o que ele faz é identificar esse pré-processador e substituir essa linha pelo arquivo a que ele faz referência

*/

//iostream é uma evolução do stdio.h. Entre as melhorias, podemos citar o cin e cout bem como os operadores de atribução respectivos de cada um
#include <iostream>

/*
    NAMESPACES--------------------------------------------------------------------------------------------------------------

    Namespaces são containers que agrupam as entidades de código de uma biblioteca.
    Como assim?
    Programas em c++ tendem a ficar bem grandes e com códigos que misturam o código próprio do programador, o código das bibliotecas padrão do c++ e o código de biblioteca de terceiros,
    assim, é possível ocorrer, por exemplo, que o nome de uma função feita pelo programador JÁ EXISTA em uma das bibliotecas de terceiros importadas.
    Assim, teremos 2 funções de mesmo nome e o compilador não saberá qual utilizar. 
    É AI QUE ENTRA OS NAMESPACES, são nomes reservados que agruparão todos os nomes de funções, objetos e caralho a 4 de uma biblioteca, assim, sempre que for usar uma função ou coisa do tipo,
    é necessário referenciar ao namespace, ou seja, DE ONDE É AQUELA FUNÇÃO.
    Dessa forma, se existirem 2,3,26 funções de mesmo nome, o compilador não irá se confundir, pois você referenciou de onde era a função especificamente.

    USANDO NAMESPACES----------

    Pode ser usado diretamente no uso:

    ex1:
        std::cout << "To usando namespace";
        //std(standart) é indicando que cin é parte das bibliotecas padrão(standart) to c++

    ex2:
        frank::cin << "To usando outro namespace";
        //frank é uma namespace para outra biblioteca.


    Caso vc saiba que todas as funções/objetos utilizados nessa folha do programa sejam de uma biblioteca específica, é possível eliminar as declarações tipo "std::" indicando para o programa fora da main de onde é a biblioteca.
    ex(FORA DA MAIN):

        using namespace std;

            É possível fazer as declações de cout, assim:
            cout << "Já especifiquei o namespace anteriormente";

    CONTUDO, ESSA ALTERNATIVA APRESENTA PROBLEMAS.
    Se queremos apenas utilizar cin,cout, endl,  por exemplo, standart trás outros nomes e padrões que podem apresentar conflitos.
    Uma alternativa, é informar diretamente quais palavras especificamente buscamos

    using std::cin;
    using std::cout;
    using std::endl;

    //Dessa forma, podemos eliminar o uso de "std::" sempre que chamamos essas funções e evitamos que dê conflito com outras palavras.
*/

using namespace std;



//É na função main que toda a execução do programa ocorrerá.
//Quando o programa é executado, o sistema operacional procura e chama pela função main.
//1 versão da main -> NÃO PRECISA DE NENHUMA INFORMAÇÃO DO SO PARA EXECUTAR, apenas ser chamada.
int main(){
    
    int favoriteNumber;

    //Cout ->"c out" é o comando para imprimir coisas no terminal, finado printf().
    //"<<" -> é o operador de inserção. Para informar o que será exibido no terminal.
    cout << "Enter your favorite number between 1 and 100: ";
    
    //Cin -> "c in" é o comando para "pegar" o que o usuário digitou
    //">>" -> operador de extração. É para informar o que será pego e para onde irá, no caso, a variável que armazenará o valor.
    cin >> favoriteNumber;

    //endl é o comando para quebrar linhas, R.I.P "\n"
    cout << "Amazing!! That's my favorite number too! :0" << endl;

    /*"Building", o famoso contruir o programa, é um processo de 3 etapas:
        Compilar
        Ligar o programa a qualquer biblioteca extra ou arquivo externo
        Criar o executável do programa
    */

    //ainda precisa retornar 0 na função main como confirmação que o programa rodou tudo que precisava corretamente.
    return 0;
}


//SEGUNDA VERSÃO DA MAIN- PRECISA DE INFORMAÇÕES DO SO PARA EXECUTAR
/*
//argc -> "argument counter" nome usado como padrão, poderia ser qualquer um. É o argumento referente a quantidade de informações que foram passados.
//argv[] ->"argument vector" são os argumentos que serão passados.
int main(int argc, char * argv[]){
    //codigo

    return 0
}
*/