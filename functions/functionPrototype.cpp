#include <iostream>

using namespace std;

//Function prototype é declarar a função antes de escrever o corpo dela.
//Por mais inútil que possa parecer tem um objetivo prático.
//Para que uma função chame a outra essa função chamada precisa ter sido criada antes de quem chama.
//Isso porque o compilador precisa checar se todos os parâmetros foram passados e se todos os tipos dos parâmetros estão corretos.
//Isso não pode ocorrer sem ele saber a função no momento que ela é chamada.
//Assim, function prototype é um jeito de deixar o compilador sabendo o que ele precisa.

//Então, no caso de 2 funções que chamam uma a outra, não importa qual colocassemos primeiro, daria problema.
//Function prototype resolve esse problema.


int function_name(); //prototype
 //É possível passar um nome para o parâmetro, mas não importa, o compilador só quer saber o tipo.
int function_name2(int); //prototype



int function_name(){ //Criação da função
    return 0;
}

int main(){

    return 0;
}