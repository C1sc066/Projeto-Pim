#include "../../../include/Geral.h"

void SubmenuLogins() {
    int op;

    cout << "[1] Ver Logins do Sitema" << endl;
    cout << "[2] Adicionar Novos Logins" << endl;
    cout << "[3] Sair" << endl;
    cout << ": ";
    cin >> op;

    switch (op) {
        case 1:
            lerLogin();
            break;
        case 2:
            AddLogin();
            break;
        case 3:
            break;
        default:
            cout << "Operador Invalido" << endl;

    }
}