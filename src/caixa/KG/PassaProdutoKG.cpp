#include "../../../include/Geral.h"

void PassaProdutoKG(string arc) {
    string ID, Quantidade;
    string Op;
    while (true) {
        cout << "ID produto: ";
        cin >> ID;

        cout << "Peso do produto: ";
        cin >> Quantidade;

        ofstream Arquivo(arc, ios::app);
        if (Arquivo.is_open()) {
            Arquivo << ID << "," << Quantidade << "," << ValorProdutoKG(ID, Quantidade) << endl;
            Arquivo.close();
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
