#include "../../include/Geral.h"

void MenuEstoque() {
    int Op;
    while (true) {
        cout << "[1] Add Produto por Unidade" << endl;
        cout << "[2] Add Produto por KG" << endl;
        cout << "[3] Ler Produtos" << endl;
        cout << "[4] Avisos" << endl;
        cout << "[5] Sair" << endl;
        cout << ": ";
        cin >> Op;

        switch (Op) {
            case 1:
                AddProdutoUnidade();
                break;
            case 2:
                AddProdutoKG();
                break;
            case 3:
                LeitorProdutos();
                break;
            case 4:
                AlertasEstoque();
                break;
            case 5:
                break;
            default:
                cout << "Opcao invelida" << endl;
        }
        if (Op == 5) {
            break;
        }
    }
}
