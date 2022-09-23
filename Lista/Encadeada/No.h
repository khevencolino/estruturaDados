//
// Created by Kheven on 13/09/2022.
//

#ifndef ESTRUTURADADOS_NO_H
#define ESTRUTURADADOS_NO_H

// Classe No para a criacao da lista encadeada
class No {

// Construtor
public:
    No();

private:
    int conteudo; // Armazena o dado do No
    No *proximo; //  Ponteiro para o proximo No na lista
public:
    // Get Set
    int getConteudo() const;

    void setConteudo(int conteudo);

    No *getProximo() const;

    void setProximo(No *proximo);
};


#endif //ESTRUTURADADOS_NO_H
