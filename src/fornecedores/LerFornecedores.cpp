#include "../../include/Geral.h"

void LerFornecedores() {
    string ID, Nome, NomeEmpresa, Contato, Descricao, Saida;
    fstream file(ArquivoFornecedores);
    cout << "_________________________" << endl;
    while (getline(file, Saida)) {
        stringstream ss(Saida);
        getline(ss, ID, ',');
        getline(ss, Nome, ',');
        getline(ss, NomeEmpresa, ',');
        getline(ss, Contato, ',');
        getline(ss, Descricao, ',');

        cout << "ID: " << ID << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Nome da Empresa: " << NomeEmpresa << endl;
        cout << "Contato: " << Contato << endl;
        cout << "Descricao: " << Descricao << endl;
        cout << "_________________________" << endl;

    }
}
