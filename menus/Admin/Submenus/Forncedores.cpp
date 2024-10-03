#include "../../../include/Geral.h"
/*
  Função: SubmenusForce
  Descrição: Exibe o submenu de fornecedores, permitindo que o usuário escolha entre ver ou adicionar fornecedores.
*/
void SubmenusForce() {
    // Variável para armazenar a opção escolhida pelo usuário
    int Op;

    // Exibe as opções do submenu de fornecedores
    cout << "[1] Ver Fornecedores" << endl;
    cout << "[2] Adicionar Fornecedores" << endl;
    cout << "[3] Sair" << endl;

    // Solicita que o usuário insira uma opção
    cin >> Op;

    // Verifica a opção escolhida e chama a função correspondente
    switch (Op) {
        case 1:
            LerFornecedores(); // Chama a função para listar fornecedores
        break;
        case 2:
            AddFornecedores(); // Chama a função para adicionar novos fornecedores
        break;
        case 3:
            break; // Encerra o submenu e retorna ao menu anterior
        default:
            // Exibe uma mensagem de erro caso a opção seja inválida
                cout << "Operador invalido!" << endl;
    }
}