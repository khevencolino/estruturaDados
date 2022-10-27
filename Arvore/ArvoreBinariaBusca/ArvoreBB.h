//
// Created by Kheven on 26/10/2022.
//

#ifndef ARVORE_ARVOREBB_H
#define ARVORE_ARVOREBB_H
#include "No.h"


class ArvoreBB {
public:
    ArvoreBB();
    No *raiz;
    No *busca(No *teste, int dado);
    bool vazia();
    void exibeInOrdem(No *t);
    bool insere(int dado);
};


#endif //ARVORE_ARVOREBB_H
