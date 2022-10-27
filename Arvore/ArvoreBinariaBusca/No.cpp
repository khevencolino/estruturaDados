//
// Created by Kheven on 26/10/2022.
//

#include "No.h"

int No::getConteudo() const {
    return conteudo;
}

void No::setConteudo(int conteudo) {
    No::conteudo = conteudo;
}

No *No::getEsq() const {
    return esq;
}

void No::setEsq(No *esq) {
    No::esq = esq;
}

No *No::getDir() const {
    return dir;
}

void No::setDir(No *dir) {
    No::dir = dir;
}

No::No() {
    esq = nullptr;
    dir = nullptr;
}
