//
// Created by Kheven on 26/10/2022.
//
#include <iostream>
#include "ArvoreBB.h"

int main(){
    ArvoreBB arvore;
    int opcao = -1, auxiliarUm;


    while (opcao != 0){
        switch (opcao) {
            case 1:
                std::cout << "Qual dado: " << std::endl;
                std::cin >> auxiliarUm;
                if (arvore.insere(auxiliarUm)) {std::cout << "Sucesso!" << std::endl;
                    break;}
                std::cout << "Erro na inserção!" << std::endl;
                break;
            case 2:
                arvore.exibeInOrdem(arvore.raiz);
                break;
            case 3:
                std::cout << "Qual dado: " << std::endl;
                std::cin >> auxiliarUm;
                auto a = arvore.busca(arvore.raiz, auxiliarUm);
                if (a == nullptr) { std::cout << "Nao encontrado" << std::endl;
                    break;}
                std::cout << "Encontrado o valor: " << a->getConteudo() << std::endl <<  "No endereco: " << a <<  std::endl;
                break;
        }
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "(1) Inserir" << std::endl;
        std::cout << "(2) Imprime" << std::endl;
        std::cout << "(3) Buscar" << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "(0) Sair" << std::endl << std::endl;
        std::cin >> opcao;
    }
}