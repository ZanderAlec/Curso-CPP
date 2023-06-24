#include <iostream>

using namespace std;

int main(){

    //Arrays são declarados dessa forma:
    int vetor[5] = {1,2,3,4,5};

    //Nota: é uma boa prática inicializar os arrays quando estes são criados.
    //Se a inicialização ocorrer na criação, o cpp consegue calcular o tamanho automáticante.

    int vet2[] = {1,2,3,4,5};
    int numBytesInt = 4;

    //Nesse caso, os 2 primeiros indices terão os valores "3" e "5" e o restante será inicializado com 0;
    int vet3[5] = {3,5};

    //Inicializando todos os indices com 0;

    int vet4[5] = {0};


    cout << vetor[1] << endl;
    cout << sizeof(vet2)/numBytesInt  << endl;

    for(int i = 0; i < 5; i++){
        cout << vet4[i] << endl;
    }

    return 0;
}