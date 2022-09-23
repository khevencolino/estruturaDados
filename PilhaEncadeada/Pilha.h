//
// Created by Kheven on 23/09/2022.
//

#ifndef ESTRUTURADADOS_PILHASIMPLES_H
#define ESTRUTURADADOS_PILHASIMPLES_H
#include "NoPilha.h"
#define tamMax 100


class Pilha {

public:
    Pilha();
    bool vazia();
    int tamanho();
    int top();
    bool push(int valor);
    int pop();
    void imprime();

    NoPilha *getTopo() const;

    void setTopo(NoPilha *topo);


private:
    NoPilha *topo;
    int nElementos;
};


#endif //ESTRUTURADADOS_PILHASIMPLES_H
