//
// Created by Kheven on 23/09/2022.
//

#include "Pilha.h"
#include "iostream"

bool Pilha::vazia() {
    if (nElementos == 0){
        return true;
    }

    return false;
}

int Pilha::tamanho() {
    return nElementos;
}

int Pilha::top() {
    if (vazia()){
        return -1; // Erro caso a lista esteja vazia
    }
    return topo->getConteudo(); // Retorna o elemento na posição desejada
}

bool Pilha::push(int valor) {
    NoPilha *novoNo = new NoPilha();
    novoNo->setConteudo(valor);

    novoNo->setProx(topo);
    topo = novoNo;

    nElementos++;
    return true;
}

int Pilha::pop() {
    if (vazia()){
        return -1; // Erro caso a lista esteja vazia
    }
    NoPilha *p = topo;
    int valor = p->getConteudo();

    topo = p->getProx();
    nElementos--;

    delete(p);
    return valor;
}

void Pilha::imprime() {
    NoPilha *aux;
    aux = topo;
    while (aux != nullptr){
        std::cout << aux->getConteudo() << " ";
        aux = aux->getProx();
    }
    std::cout << std::endl;
    delete(aux);
}



Pilha::Pilha() {
    topo = nullptr;
    nElementos = 0;
}

NoPilha *Pilha::getTopo() const {
    return topo;
}

void Pilha::setTopo(NoPilha *topo) {
    Pilha::topo = topo;
}
