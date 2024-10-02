#include "../../include/Geral.h"

void MenuAdmin() {
    int Op;

    cout << "Voce esta logado como admin" << endl;
    cout << "[1] Fornecedores" << endl;
    cout << "[2] Logins" << endl;
    cout << "[3] Caixa" << endl;
    cout << "[4] Estoque" << endl;
    cout << "[5] Sair" << endl;
    cout << ": ";
    cin >> Op;

    switch (Op) {
        case 1:
            SubmenusForce();
            break;
        case 2:
            SubmenuLogins();
            break;
        case 3:
            MenuCaixa();
            break;
        case 4:
            MenuEstoque();
            break;
        case 5:
            break;
        default:
            cout << "Opcao invalida!" << endl;
    }
}