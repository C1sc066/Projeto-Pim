#include "../../include/Geral.h"
/*
  Função: MenuCaixa
  Descrição: Exibe o menu do caixa, permitindo que o usuário escolha entre passar um produto ou sair do menu.
*/
void MenuCaixa() {
    // Variável para armazenar a opção escolhida pelo usuário
    int Op;

    // Exibe as opções do menu do caixa
    cout << "[1] Passar Produto" << endl;
    cout << "[2] Sair" << endl;
    cout << ": " << endl;

    // Solicita que o usuário insira uma opção
    cin >> Op;

    // Verifica a opção escolhida e chama a função correspondente
    switch (Op) {
        case 1:
            SubmenuPassarProduto(Gerador()); // Chama a função para passar um produto, gerando um novo ID
            break; // Adicione o break para evitar "fall through"
        case 2:
            break; // Encerra o menu e retorna ao menu anterior
        default:
            // Exibe uma mensagem de erro caso a opção seja inválida
            cout << "Opcao invalida!" << endl;
    }
}
