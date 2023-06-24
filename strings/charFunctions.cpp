#include <iostream>

//Existem várias funções para manipular(deixar maiúsculo ou minúsculo) e testar os caracteres
//Para utilizar essas funções é necessário adicionar a biblioteca padrão <cctype>
//PS: cada função aceita apenas um caracter
#include <cctype> 

using namespace std;

int main(){

    char character = 'g';
    //Transforma o caracter em maiúsculo
    char upperChar = toupper(character);
    //Transforma o caracter em minúsculo
    char lowerChar = tolower(upperChar);

   cout << upperChar << endl;
   cout << lowerChar << endl;

    return 0;
}