//
// Created by Kheven on 08/09/2022.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H


class Lista {
private:
    int tamAtual;
    int tamMax;
    int dados[100];
public:
    Lista();

    bool vazia();

    bool cheia();

    int tamanho();

    int posicao(int dado);

    bool insere(int pos, int dado);

    int remover(int pos);
};


#endif //LISTA_LISTA_H
