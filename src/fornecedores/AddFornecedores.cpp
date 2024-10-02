#include "../../include/Geral.h"

void AddFornecedores() {
    string Nome, NomeEmpresa, Contato, Descricao, Op;

    cout << "Insira o Nome do Fornecedores: ";
    cin >> Nome;

    system("clear");

    cout << "Insira o Nome da Empresa: ";
    cin >> NomeEmpresa;

    system("clear");

    cout << "Insira o Contato do Fornecedores: ";
    cin >> Contato;

    system("clear");

    cout << "Insira uma Descricao para o Fornecedor: " << endl;
    cin >> Descricao;

    system("clear");

    cout << "Nome do Fornecedores: " << Nome << endl;
    cout << "Nome da Empresa: " << NomeEmpresa << endl;
    cout << "Contato do Fornecedor: " << Contato << endl;
    cout << "Descricao do Fornecedores: " << Descricao << endl;
    cout << "Deseja Salvar \n[S].sim [N].Nao\n: ";
    cin >> Op;

    if (Op == "S" || Op == "s") {
        system("clear");
        fstream file(ArquivoFornecedores, ios::app);
        if (file.is_open()) {
            file << "\n" << UltimoID(ArquivoFornecedores) << "," << Nome << "," << NomeEmpresa << "," << Contato << ","
                    << Descricao;
            file.close();
        }
    }
}
