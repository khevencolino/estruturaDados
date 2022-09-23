//
// Created by Kheven on 23/09/2022.
//

#ifndef ESTRUTURADADOS_PILHASIMPLES_H
#define ESTRUTURADADOS_PILHASIMPLES_H
#define tamMax 100 // Tamanho da pilha


class Pilha {

public:
    bool vazia();
    bool cheia();
    int tamanho();
    int top();
    bool push(int valor);
    int pop();
    void imprime();

    int getTopo() const;

    void setTopo(int topo);

private:
    int dados[tamMax];
    int topo = -1;
};


#endif //ESTRUTURADADOS_PILHASIMPLES_H
