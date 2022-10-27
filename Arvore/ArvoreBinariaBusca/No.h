//
// Created by Kheven on 26/10/2022.
//

#ifndef ARVORE_NO_H
#define ARVORE_NO_H


class No {
private:
    int conteudo;
    No *esq;
    No *dir;
public:
    No();

    int getConteudo() const;

    void setConteudo(int conteudo);

    No *getEsq() const;

    void setEsq(No *esq);

    No *getDir() const;

    void setDir(No *dir);
};


#endif //ARVORE_NO_H
