#include <iostream>

//Para usar as strings do c++ é preciso adicionar a biblioteca string
#include <string>

//Além disso, quando lidamos com strings em c++ é preciso especificar o namespace std;


using namespace std;

int main(){

    //As strings em c++ são, assim como em c, armazenadas na memória de forma contínua(caracteres um do lado do outro)
    //Contudo, a diferença se dá porque as strings do c++ são de TAMANHO DINÂMICO.
    //funcionam com cin e cout
    //Strings do c++ são OBJETOS e como tal fornecem métodos e atributos.
    //Operadores de comparação podem ser utilizados, tais como (+, = , <, <=, > , >=, +=, ==, !=, []) etc
    //E caso necessário, podem ser convertidas para C-style strings

    string s1; //Não precisa ser inicializada, é automáticamente empty, ou seja sem lixo.
    string s2 {"frank"}; //Inicialização c-style, porém o tipo string irá CONVERTER automáticamente para o tipo cpp;
    string s3 {s2}; //Cópia a string s2 para a string s3
    string s4 {"frank", 3}; //atribui um nome e um valor, o valor é a quantidade de caracteres desse nome que será armazenado, no caso "fra";
    string s5 {s3, 0, 2}; //copia s3 e informa o indice de inicio da copia e indice de finalização. result fr
    string s6 (3, 'X'); //Inicializa a string com 3 caracteres todos 'X';

    string st1 = "YEAH";
    string st2;

    st2 = st1;  //Copia a st1 para st2 sem precisar usar o strcpy;

    //Concatenação-------------------------------------------------------------------

    string part1 {"Yeah"};
    string part2 {"BRO"};

    //Não precisa usar a função de concatenação
    //A concatenação pode ser feita com strings ou literals, porém não literals + literals;

    string sentence = part1 + " "  + part2 + "!";

    //Não será compilado, pois literals são c-style strings.
    //string sntence = "exemplo" + "exemplo";

    //Assim, como na c-style strings é possível pegar carateres da string

    cout << part1[0] << endl; //retornará Y

    //É mais interessante usar at(), pois possui "bounce checking", ou seja, caso eu tente acessar um endereço fora da string, ele retornará uma EXCESSÃO e eu poderei ver o erro.
    //Diferente de [] que apenas dará erro e eu que me foda pra achar;
    cout << part1.at(0) << endl; //retornará Y

    /*Comparação de stirngs--------------------------------------------------------------

    podem ser comparados c++ string com c++ strings;    
                        c++ strings com c literals;
                        c++ strings com c strings variaveis;

    a < z;
    z < A;

    //As comparações podem ser feitas com os operadores padrões
        ==, <=, >= etc;
    */

   //substrings -----------------------------------------------------------------------
    //Retirar um pedaço de uma string

    string exemplo {"Isso é um teste"};
    string substring {};

    /*
        Parâmetros:
                1º índice de início
                2º índice de finalização do corte
    */
    substring = exemplo.substr(0,4); //resultado = "Isso";


    //Searching ----------------------------------------------------------------------------

    //find() procura uma palavra /caracter na string e retorna o índice de início dessa palavra/character

    cout << exemplo.find("Isso"); //retornará 0;


    //.length() retorna o tamanho da string;
    

    return 0;
}