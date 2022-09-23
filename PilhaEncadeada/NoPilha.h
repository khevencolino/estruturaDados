//
// Created by Kheven on 23/09/2022.
//

#ifndef PILHA_NOPILHA_H
#define PILHA_NOPILHA_H


class NoPilha {
private:
    int conteudo;
    NoPilha *prox;
public:
    NoPilha();

    int getConteudo() const;

    void setConteudo(int conteudo);

    NoPilha *getProx() const;

    void setProx(NoPilha *prox);

};


#endif //PILHA_NOPILHA_H
