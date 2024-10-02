#include "../../../include/Geral.h"

void PassarProdutoUnidade(string Arquivo) {
    string ID, Quantidade, Op;
    while (true) {
        cout << "ID produto: ";
        cin >> ID;

        cout << "Quantidade produto: ";
        cin >> Quantidade;

        ofstream arc(Arquivo, ios::app);
        if (arc.is_open()) {
            arc << ID << "," << Quantidade << "," << ValorProdutoKG(ID, Quantidade) << endl;
            arc.close();
        } else {
            cout << "Erro";
            break;
        }
        cout << "Deseja passar outro produto S/N :";
        cin >> Op;
        if (Op == "N" || Op == "n") {
            break;
        }
    }
}
