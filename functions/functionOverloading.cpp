#include <iostream>

using namespace std;


//FUNCTION OVERLOADING são funções que possuem o mesmo nome, porém recebem atributos diferentes.
//Assim, na hora da compilação, o compilador sabe qual função chamar pelos parâmetros informados.
//Essa é uma forma de POLIMORFISMO(formas diferentes, para um mesmo objeto), visto que, as funções fazem a mesma coisa, porém usam dados diferentes.
//Essa funcionalidade é exclusiva de c++.
//NOTA: para criar overloading functions é preciso ter PARÂMETROS, pois essa é a base para o compilador saber qual função chamar.
//funções sem parâmetros, mesmo com tipos diferentes resultaram em erro, pois o compilador não se baseia no return;

//Ex:


int add_numbers(int, int); //Soma inteiros
double add_numbers(double, double); // Soma doubles

int add_numbers(int a, int b){
    return a+b;
}

double add_numbers(double a, double b){
    return a+b;
}



int main(){

    //Como o compilador chamará a função baseado nos parâmetros, eu não tenho que me preocupar com diferentes nomes de funções,
    //Ou, em alguns casos, com if's pra saber qual função chamar. Apenas chamar a função de soma e passar os parâmetros. 
    cout << add_numbers(10,20) << endl;
    cout << add_numbers(10.0, 20.0) << endl;

    return 0;
}