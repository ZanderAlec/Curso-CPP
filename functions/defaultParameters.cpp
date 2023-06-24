#include <iostream>

using namespace std;

//Default parameters são valores padrões para os parâmetros das funções.
//Assim, caso um desses valores não seja informado, a função automáticamente utiliza o valor padrão.
//É possível ter mais de um valor padrão.
//os parâmetros com valores padrão ficam sempre no final.

//O valor padrão geralmente é colocado no protótipo da função.
//Pode ser colocado também na função normal, porém não em ambos ao mesmo tempo.
double calc_cost(double base_cost, double tax_rate = 0.6, double shipping = 20 );

double calc_cost(double base_cost, double tax_rate, double shipping){

    return base_cost += ((base_cost * tax_rate) + shipping);
}


int main(){

    double cost {0};

    cost = calc_cost(200); //Usará o valor padrão

    cout << "Valor padrão: "<< cost << endl;

    cost = calc_cost(200, 0.8,  30); //Usará o valor específicado 

    cout << "Valor específicado: "<< cost << endl;

    //Não é possível pegar um valor padrão e atribuir o próximo.
    cost = calc_cost(200,30);

    cout << "teste: "<< cost << endl;

    return 0;
}