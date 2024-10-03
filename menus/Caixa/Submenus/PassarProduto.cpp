#include "../../../include/Geral.h"
/*
  Função: SubmenuPassarProduto
  Descrição: Exibe um submenu para gerenciar a passagem de produtos, permitindo que o usuário escolha entre passar produtos em unidades ou quilogramas, finalizar vendas, ou sair do submenu.
*/
void SubmenuPassarProduto(string Arquivo) {
    // Variável para armazenar a opção escolhida pelo usuário
    int Op;

    // Laço contínuo para manter o submenu ativo até que o usuário decida sair
    while (true) {
        // Exibe as opções do submenu para passar produtos
        cout << "[1] Passar Produto" << endl;
        cout << "[2] Passar Produto (KG)" << endl; // Corrigir o texto de "Pasar Produto" para "Passar Produto (KG)"
        cout << "[3] Finalizar Venda" << endl;
        cout << "[4] Sair" << endl;
        cout << ": ";

        // Solicita que o usuário insira uma opção
        cin >> Op;

        // Verifica a opção escolhida e chama a função correspondente
        switch (Op) {
            case 1:
                PassarProdutoUnidade(Arquivo); // Chama a função para passar produto por unidade
            break;
            case 2:
                PassaProdutoKG(Arquivo); // Chama a função para passar produto por quilograma
            break;
            case 3:
                Gravador(ArquivoEstoque, Arquivo); // Chama a função para finalizar a venda e gravar no estoque
            break; // Adiciona break para evitar "fall through"
            case 4:
                return; // Encerra o submenu e retorna ao menu anterior
            default:
                // Exibe uma mensagem de erro caso a opção seja inválida
                    cout << "Opcao invalida!" << endl;
        }
    }
}
