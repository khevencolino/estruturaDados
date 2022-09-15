//
// Created by Kheven on 13/09/2022.
//

#ifndef ESTRUTURADADOS_LISTAENCADEADA_H
#define ESTRUTURADADOS_LISTAENCADEADA_H
// Inclui a classe No para representar cada elemento da lista
#include "No.h"


class ListaEncadeada {
public:
    ListaEncadeada();
    int imprime();
    bool vazia() const;
    int tamanho() const;
    int elemento(int pos);
    int posicao(int dado);
    bool insere(int pos, int dado);
    int remove(int pos);

private:
    No *cabeca;
    int tamanhoLista;


    bool insereInicioLista(int dado);

    bool insereFimLista(int dado);

    bool insereMeioLista(int pos, int dado);

    int removeInicioLista(int pos);

    int removeLista(int pos);
};


#endif //ESTRUTURADADOS_LISTAENCADEADA_H
