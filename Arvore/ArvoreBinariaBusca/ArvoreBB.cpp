//
// Created by Kheven on 26/10/2022.
//

#include <iostream>
#include "ArvoreBB.h"

ArvoreBB::ArvoreBB() {
    raiz = nullptr;
}

bool ArvoreBB::vazia() {
    return (raiz == nullptr);
}

void ArvoreBB::exibeInOrdem(No *t) {
    if (t != nullptr){
        exibeInOrdem(t->getEsq());
        std::cout << t->getConteudo() << std::endl;
        exibeInOrdem(t->getDir());
    }
}

No *ArvoreBB::busca(No *teste, int dado) {
    if(teste == nullptr or dado == teste->getConteudo()) {
        return teste;
    }
    if (dado < teste->getConteudo()){
        return busca(teste->getEsq(), dado);
    } else {
        return busca(teste->getDir(), dado);
    }
}

bool ArvoreBB::insere(int dado) {
    No *novoNo, *atual, *p;
    novoNo = new No();

    novoNo->setConteudo(dado);
    novoNo->setEsq(nullptr);
    novoNo->setDir(nullptr);

    if (raiz == nullptr){raiz = novoNo; return true;}
    atual = raiz;
    while (atual != nullptr){
        p = atual;
        if (atual->getConteudo() > dado){
            atual = atual->getEsq();
        } else{
            atual = atual->getDir();
        }
    }

    if (p->getConteudo() > dado){
        p->setEsq(novoNo);
    } else {
        p->setDir(novoNo);
    }
    return true;

}
