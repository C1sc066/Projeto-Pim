#include "../../include/Geral.h"

void AlertasEstoque() {
    string Saida, STRID, Nome, Quantidade, Valor, Validade, STRLimite;
    float AQuantidade, Limite;

    fstream arquivo(ArquivoEstoque);
    cout << "-------------------------" << endl;
    while (getline(arquivo, Saida)) {
        stringstream ss(Saida);
        getline(ss, STRID, ',');
        getline(ss, Nome, ',');
        getline(ss, Quantidade, ',');
        getline(ss, Valor, ',');
        getline(ss, Validade, ',');
        getline(ss, STRLimite, ',');

        AQuantidade = stof(Quantidade);
        Limite = stof(STRLimite);

        if (AQuantidade <= Limite) {
            cout << "ID: " << STRID << endl;
            cout << "Nome: " << Nome << endl;
            cout << "Quantidade: " << Quantidade << endl;
            cout << "Valor: " << Valor << endl;
            cout << "Validade: " << Validade << endl;
            cout << "Limite: " << Limite << endl;
            cout << "-------------------------" << endl;
        }
    }
}
