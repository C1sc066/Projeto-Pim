#include "../../include/Geral.h"

/*
  Função: MenuAdmin
  Descrição: Exibe o menu de administração e permite que o usuário admin escolha uma das opções disponíveis,
             redirecionando para os submenus correspondentes de Fornecedores, Logins, Caixa, ou Estoque.
*/

void MenuAdmin() {
    // Declaração da variável para armazenar a opção escolhida pelo usuário
    int Op;

    // Exibe as opções do menu de administração
    cout << "Voce esta logado como admin" << endl;
    cout << "[1] Fornecedores" << endl;
    cout << "[2] Logins" << endl;
    cout << "[3] Caixa" << endl;
    cout << "[4] Estoque" << endl;
    cout << "[5] Sair" << endl;
    cout << ": ";
    // Solicita que o usuário insira uma opção
    cin >> Op;

    // Verifica a opção escolhida pelo usuário e chama a função apropriada
    switch (Op) {
        case 1:
            SubmenusForce(); // Redireciona para o submenu de fornecedores
            break;
        case 2:
            SubmenuLogins(); // Redireciona para o submenu de logins
            break;
        case 3:
            MenuCaixa(); // Redireciona para o submenu do caixa
            break;
        case 4:
            MenuEstoque(); // Redireciona para o submenu do estoque
            break;
        case 5:
            break; // Encerra o programa
        default:
            // Exibe uma mensagem de erro caso o usuário tenha escolhido uma opção inválida
            cout << "Opcao invalida!" << endl;
    }
}