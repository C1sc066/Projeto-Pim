#include "../../../include/Geral.h"

void SubmenusForce() {
    int Op;
    cout << "[1] Ver Fornecedores" << endl;
    cout << "[2] Adicionar Fornecedores" << endl;
    cout << "[3] Sair" << endl;

    cin >> Op;
    switch (Op) {
        case 1:
            LerFornecedores();
            break;
        case 2:
            AddFornecedores();
            break;
        case 3:
            break;
        default:
            cout << "Operador invalido!" << endl;
    }
}