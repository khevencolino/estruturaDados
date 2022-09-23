//
// Created by Kheven on 23/09/2022.
//

#include "NoPilha.h"

NoPilha::NoPilha(){
    prox = nullptr;
}

int NoPilha::getConteudo() const {
    return conteudo;
}

void NoPilha::setConteudo(int conteudo) {
    NoPilha::conteudo = conteudo;
}

NoPilha *NoPilha::getProx() const {
    return prox;
}

void NoPilha::setProx(NoPilha *prox) {
    NoPilha::prox = prox;
}
