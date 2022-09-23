#include <iostream>
#include "Lista.h"

int main() {
    Lista l;
    int opcao = -1, auxiliarUm, auxiliarDois;
    std::cout << "(1) Inserir" << std::endl;
    std::cout << "(2) Vazia" << std::endl;
    std::cout << "(3) Cheia" << std::endl;
    std::cout << "(4) Tamanho" << std::endl;
    std::cout << "(5) Obter Posiçao" << std::endl;
    std::cout << "(6) Remover" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "(0) Sair" << std::endl << std::endl;

    std::cin >> opcao;

    while (opcao != 0){
        switch (opcao) {
            case 1:
                std::cout << "Qual dado: " << std::endl;
                std::cin >> auxiliarUm;
                std::cout << "Tamanho Atual e ultima disponivel: " << l.tamanho() << "   " << l.tamanho() + 1 << std::endl;
                std::cout << "Qual posicao: " << std::endl;
                std::cin >> auxiliarDois;
                if (!l.insere(auxiliarDois,auxiliarUm)){
                    std::cout << "Erro ao inserir, posicao invalida, tente novamente" << std::endl;
                    break;
                }
                std::cout << "Sucesso" << std::endl;
                break;
            case 2:
                std::cout << l.vazia();
                break;
            case 3:
                std::cout << l.cheia();
                break;
            case 4:
                std::cout << "O tamanho eh: " << l.tamanho() << std::endl;
                break;
            case 5:
                std::cout << "Qual dado: " << std::endl;
                std::cin >> auxiliarUm;
                std::cout << "A posicao eh: " << l.posicao(auxiliarUm) << std::endl;
                break;
            case 6:
                std::cout << "Tamanho Atual e ultima disponivel: " << l.tamanho() << "   " << l.tamanho() + 1 << std::endl;
                std::cout << "Qual posicao: " << std::endl;
                std::cin >> auxiliarDois;
                if (l.remover(auxiliarDois) == -1){
                    std::cout << "Erro ao remover, posicao invalida" << std::endl;
                }
                std::cout << "Sucesso!" << std::endl;
                break;
        }
        std::cin >> opcao;
    }
    return 0;
}
