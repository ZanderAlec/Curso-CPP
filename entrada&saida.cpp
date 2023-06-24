#include <iostream> //Iostream é a biblioteca que fornece as funções para lidar com a entrada e saída de dados.

using namespace std;

int main(){

    cout << "Hello world!" << endl;

    int num1;
    int num2;
    double num3;

    cout << "Enter 2 integers: ";
    
    //Nota: Apenas 'enter' submete o valor do teclado, espaços e tabs são ignorados.
    cin >> num1 >> num2;
    cout << "You entered: " << num1 << " and " << num2 << endl;

    return 0;
}