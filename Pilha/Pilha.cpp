//
// Created by Kheven on 23/09/2022.
//

#include "Pilha.h"
#include "iostream"

bool Pilha::vazia() {
    if (topo == -1){
        return true;
    }

    return false;
}

bool Pilha::cheia() {
    if (topo == (tamMax-1)){
        return true;
    }
    return false;
}

int Pilha::tamanho() {
    return (topo+1);
}

int Pilha::top() {
    if (vazia()){
        return -1; // Erro caso a lista esteja vazia
    }
    return dados[topo]; // Retorna o elemento na posição desejada
}

bool Pilha::push(int valor) {
    if(cheia()){
        return false;
    }
    topo++;
    dados[topo] = valor;
    return true;
}

int Pilha::pop() {
    if (vazia()){
        return -1; // Erro caso a lista esteja vazia
    }
    int val = dados[topo];
    topo--;
    return val;
}

void Pilha::imprime() {
    for (int i = topo; i >= 0; i--){
        std::cout << dados[i] << " ";
    }

    std::cout << std::endl;
}

int Pilha::getTopo() const {
    return topo;
}

void Pilha::setTopo(int topo) {
    Pilha::topo = topo;
}
