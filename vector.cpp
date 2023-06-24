#include <iostream>
//Como tudo em c, c++ para usarmos vetores precisamos adicionar a biblioteca que os contem.
#include <vector> 

using namespace std;

int main(){

    //vector's são componentes contidos na biblioteca padrão do c++
    //Trata-se de um array DINÂMICO que pode crescer e diminuir de tamanho conforme a necessidade.
    //um vetor nada mais é que um objeto, assim ele possui métodos que podem ser utilizados.
    //Vetores podem ser de qualquer tipo.

    //DECLARAÇÃO:

    //Vector's são da biblioteca padrão, assim precisam ser especificados com std:: ou estabelecer o namespace no topo da página.

    //o tipo do vector precisa estar dentro de chaves(<>) pois trata-se de um objeto.
   //5 é o tamanho do vector
    //Todos os valores desses indices irão automáticamente ser colocados como 0

    vector <int> test_scores (5);

    vector <int> test_scores2 {100,98,58,93};

    //O primeiro parametro(5) é o tamanho do vector
    //O segundo parametro (80.2) é o valor que todos os elementos desse array será inicializado.
    vector <double> hi_temperatures (5, 80.2);

    //Acessando vectors-------------------------------------------------------------

    //Sintaxe 1: (Semelhante a arrays)

    cout << "Temperaturas: " << hi_temperatures[1] << endl;

    //Sintaxe 2: (Usando os métodos do objeto vector)
    //at() é um método dos vectors e recebe como parametro o indice que deseja ser visualizado.

    cout << "Temperaturas 2: " << hi_temperatures.at(1) << endl;

    //Aumentando o tamanho dos vector---------------------------------------------------
    //Push_back() é o método para inserir um elemento no final do vector
    //Recebe como parâmetro o valor a ser colocado na nova posição.

    int num_bytes_int {4}; 

    vector <int> numeros {1,2,3};
 
    cout << "ultimo elemento: " << numeros[2] << endl;

    numeros.push_back(20);

    cout << "ultimo elemento: " << numeros[3] << endl;

    //VECTORES BIDIMENSIONAIS------------------------------------------------------------

    //declaração:

    //Nesse caso, não queremos um vetor de inteiros, mas sim um vector que guardará um vector de inteiros.
    vector <vector<int>> movie_ratings
    {
        {1,2,3}, //[0]
        {1,2,3}, //[1]
        {1,2,3} //[2]
    };

    //acesso:

    cout << movie_ratings[0][1] << endl; //retornará 2;
    
    //primeiro at acessa a linha, o segundo a coluna.
    cout << movie_ratings.at(0).at(1) << endl; //retornará 2

    return 0;
}