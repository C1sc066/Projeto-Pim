#include "../../include/Geral.h"

void MenuCaixa() {
    int Op;
    cout << "[1] Passar Produto" << endl;
    cout << "[2] Sair" << endl;
    cout << ": " << endl;
    cin >> Op;

    switch (Op) {
        case 1:
            SubmenuPassarProduto(Gerador());
        case 2:
            break;
        default:
            cout << "Opcao invalida!" << endl;
    }

}