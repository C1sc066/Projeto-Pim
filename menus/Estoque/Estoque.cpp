#include "../../include/Geral.h"
/*
  Função: MenuEstoque
  Descrição: Exibe o menu de gerenciamento de estoque, permitindo que o usuário adicione produtos, leia produtos existentes, veja avisos e saia do menu.
*/
void MenuEstoque() {
    // Variável para armazenar a opção escolhida pelo usuário
    int Op;

    // Laço contínuo para manter o menu ativo até que o usuário decida sair
    while (true) {
        // Exibe as opções do menu de estoque
        cout << "[1] Add Produto por Unidade" << endl;
        cout << "[2] Add Produto por KG" << endl;
        cout << "[3] Ler Produtos" << endl;
        cout << "[4] Avisos" << endl;
        cout << "[5] Sair" << endl;
        cout << ": ";

        // Solicita que o usuário insira uma opção
        cin >> Op;

        // Verifica a opção escolhida e chama a função correspondente
        switch (Op) {
            case 1:
                AddProdutoUnidade(); // Chama a função para adicionar produtos por unidade
                break;
            case 2:
                AddProdutoKG(); // Chama a função para adicionar produtos por quilograma
                break;
            case 3:
                LeitorProdutos(); // Chama a função para ler e listar produtos existentes
                break;
            case 4:
                AlertasEstoque(); // Chama a função para exibir avisos relacionados ao estoque
                break;
            case 5:
                return; // Encerra o menu e retorna ao menu anterior
            default:
                // Exibe uma mensagem de erro caso a opção seja inválida
                cout << "Opcao invalida" << endl;
        }
    }
}
