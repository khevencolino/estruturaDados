//
// Created by Kheven on 13/09/2022.
//

#include "No.h"

No::No() {
    proximo = nullptr; // Ponteiro normalmente aponta para o nulo, usando nullptr segundo C++11
}

// Get Set
int No::getConteudo() const {
    return conteudo;
}

void No::setConteudo(int conteudo) {
    No::conteudo = conteudo;
}

No *No::getProximo() const {
    return proximo;
}

void No::setProximo(No *proximo) {
    No::proximo = proximo;
}
