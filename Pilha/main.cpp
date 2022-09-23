#include <iostream>
#include "Pilha.h"

int main() {
    Pilha pilha;
    int opcao = -1, auxiliarUm, auxiliarDois;
    // Menu Usuario
    std::cout << "(1) Inserir" << std::endl;
    std::cout << "(2) Remover" << std::endl;
    std::cout << "(3) Imprime" << std::endl;
    std::cout << "(4) Tamanho" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "(0) Sair" << std::endl << std::endl;

    std::cin >> opcao;

    while (opcao != 0){
        switch (opcao) {
            case 1:
                std::cout << "Qual dado: " << std::endl;
                std::cin >> auxiliarUm;
                if (pilha.push(auxiliarUm)){
                    std::cout << "Sucesso!" << std::endl;
                    break;
                }
                std::cout << "Erro ao adicionar dado" << std::endl;
                break;
            case 2:
                std::cout << "O dado seguinte foi removido: " << pilha.pop() << std::endl;
                break;
            case 3:
                pilha.imprime();
                break;
            case 4:
                std::cout << "Tamanho da pilha: " << pilha.tamanho() << std::endl;
                break;
        }
        std::cin >> opcao;
    }
}
