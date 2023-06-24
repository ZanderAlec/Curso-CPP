//Uma forma mais organizada de separar as classes é criando um arquivo.h para cada uma delas.
//Contudo, é possível que essa mesma classe seja incluida em mais de um arquivo cpp do programa
//O que leva a um erro de compilação "declaração duplicada"
//Para resolver esse problema, usamos "include guards" que garantem que independente de quantas vezes
//for inclusa, a classe só será processada uma vez.

//Include guardas nada mais são do que pre-processadores.

//Faz o mesmo q o infdef, porém nem todos os compiladores aceitam.
#pragma once

        //O nome pode ser qualquer um, desde que seja único no programa inteiro.
#ifndef _ACCOUNT_H_ //Verifica se essa pré-diretiva já foi definida.
#define _ACCOUNT_H_ //Caso não seja, define-a. Ou seja, processa essa classe.

//Caso, já tenha sido definida, pula para o #endif. Dessa forma, a classe não é declarada dnv
//Visto que esta ja foi definida. 


class Account {
    private:
    double balance;

    public:
    void set_balance(double bal);
    double get_balance();
};

#endif 