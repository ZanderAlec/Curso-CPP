#include <iostream>
#include <string>
#include <vector>

using namespace std;

//ex:

void display(vector<string> *v){

    
    for(auto str: *v)
        cout <<str << " ";

    cout<< endl;
}



int main(){

    //Vetores são passados para funções com o objetivo de manipular por referência e não por valor. 
    // o parâmetro da função é um vetor, mas a passagem é um endereço.
    //Vectors não tem a mesma relação com ponteiros que arrays.

    cout << "----------------" << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};

    //passa o Endereço de stooges para a função.
    //ps: poderia passar um vetor que aponta para esse endereço.
    display(&stooges);

    return 0;
}