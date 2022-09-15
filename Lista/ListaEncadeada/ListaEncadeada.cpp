//
// Created by Kheven on 13/09/2022.
//

#include "ListaEncadeada.h"

ListaEncadeada::ListaEncadeada() {
    cabeca = nullptr; // Inicializa a cabeca
    tamanhoLista = 0; // Define o tamanho incial da lista
}

bool ListaEncadeada::vazia() const {
    if (tamanhoLista == 0){
        return true;
    }
    return false;
}

int ListaEncadeada::tamanho() const {
    return tamanhoLista;
}

int ListaEncadeada::elemento(int pos) {
    if(vazia() || (pos < 1) || (pos > tamanhoLista) ) {return -1;} // Verifica Out of range position
    No *aux = cabeca;
    int contador = 1;
    // Percorre a lista ate a posicao desejada e retorna o valor da mesma
    while (contador < pos){
        aux = aux->getProximo();
        contador++;
    }
    return aux->getConteudo();
}

int ListaEncadeada::posicao(int dado) {
    if(vazia()) { return -1;} // Verifica Out of range position
    int contador = 1;
    No *aux = cabeca;
    // Percorre a lista em busca do conteudo procurado
    while (aux != nullptr){
        if(aux->getConteudo() == dado){
            return contador;
        }
        aux = aux->getProximo();
        contador++;
    }
    return -1;
}

bool ListaEncadeada::insere(int pos, int dado) {
    if(vazia() && (pos != 1)) { return false;}

    if(pos == 1) {
        return insereInicioLista(dado);
    }

    if(pos == (tamanhoLista + 1)) {
        return insereFimLista(dado);
    }

    return insereMeioLista(pos,dado);
}

bool ListaEncadeada::insereInicioLista(int dado) {
    // Alocando memoria para No
    No *novoNo = new No();

    // Insere novo elemento
    novoNo->setConteudo(dado);
    novoNo->setProximo(cabeca);
    cabeca = novoNo;
    tamanhoLista++;
    return true;
}

bool ListaEncadeada::insereFimLista(int dado) {
    // Inicializa os auxiliares
    No *novoNo = new No();
    novoNo->setConteudo(dado);

    // Percorre até o final da lista
    No *aux = cabeca;
    while (aux->getProximo() != nullptr){
        aux = aux->getProximo();
    }

    novoNo->setProximo(nullptr);
    aux->setProximo(novoNo);
    tamanhoLista++;
    return true;
}

bool ListaEncadeada::insereMeioLista(int pos, int dado) {
    // Inicializa os auxiliares
    int contador = 1;
    // Alocando memoria para No
    No *novoNo = new No();
    novoNo->setConteudo(dado);

    No *aux = cabeca;
    // Percorre a lista
    while ((contador < pos-1) && (aux != nullptr)) {
        aux = aux->getProximo();
        contador++;
    }
    if (aux == nullptr) {return false;}

    novoNo->setProximo(aux->getProximo());
    aux->setProximo(novoNo);
    tamanhoLista++;
    return true;
}

int ListaEncadeada::remove(int pos) {
    if (vazia()) {return -1;}

    if (pos == 1){
        return removeInicioLista(pos);
    }

    return removeLista(pos);
}

int ListaEncadeada::removeInicioLista(int pos) {
    // Inicializa os auxiliares
    No *aux = cabeca;
    int dado = aux->getConteudo();

    // Remove item e atualiza a cabeça da lista
    cabeca = aux->getProximo();
    tamanhoLista--;
    delete(aux);
    return dado;
}

int ListaEncadeada::removeLista(int pos) {
    // Inicializa os auxiliares
    No *atual = nullptr, *anterior = nullptr;
    int dado = -1, contador = 1;

    atual = cabeca;

    // Percorre lista ate a posição desejada
    while ((contador < pos) && (atual != nullptr)){
        anterior = atual;
        atual = atual->getProximo();
        contador++;
    }

    // Verifica se a posicao escolhida é valida para remoção
    if (atual == nullptr) { return -1;}

    dado = atual->getConteudo();
    anterior->setProximo(atual->getProximo());
    tamanhoLista--;

    // Remove o ponteiro
    delete(atual);
    return dado;
}
