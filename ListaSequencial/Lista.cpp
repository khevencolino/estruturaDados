//
// Created by Kheven on 08/09/2022.
//

#include "Lista.h"

Lista::Lista() {
    tamAtual = 0;
    tamMax = 100;
}

bool Lista::vazia() {
    if (tamAtual == 0){
        return true;
    }
    return false;
}

bool Lista::cheia() {
    if (tamAtual == tamMax){
        return true;
    }
    return false;
}

int Lista::tamanho() {
    return tamAtual;
}

int Lista::posicao(int dado){
    for (int i = 0; i < tamAtual; i++) {
        if (dados[i] == dado){
            return (i + 1);
        }
    }
    return -1;
}

bool Lista::insere(int pos, int dado) {
    if (cheia() || (pos > tamAtual+1) || (pos<=0)){
        return false;
    }
    for (int i = 0; i >= pos; i--) {
        dados[i] = dados[i-1];
    }

    dados[pos-1] = dado;
    tamAtual++;
    return true;
}

int Lista::remover(int pos) {
    int dado;
    if ((pos > tamAtual) || (pos < 1)){
        return -1;
    }
    dado = dados[pos-1];
    for (int i = pos -1; i < tamAtual - 1; i++){
        dados[i] = dados[i+1];
    }
    tamAtual--;
    return dado;
}
