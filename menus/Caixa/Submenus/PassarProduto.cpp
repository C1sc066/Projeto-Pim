#include "../../../include/Geral.h"

void SubmenuPassarProduto(string Arquivo) {
    int Op;
    while (true) {
        cout << "[1] Passar Produto" << endl;
        cout << "[2] Pasar Produto" << endl;
        cout << "[3] Finalizar Venda" << endl;
        cout << "[4] Sair" << endl;
        cout << ": ";
        cin >> Op;

        switch (Op) {
            case 1:
                PassarProdutoUnidade(Arquivo);
                break;
            case 2:
                PassaProdutoKG(Arquivo);
                break;
                //falta finalizar a venda
            case 3:
                Gravador(ArquivoEstoque, Arquivo);
            case 4:
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    }
}
