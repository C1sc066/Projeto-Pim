#include "../../include/Geral.h"

/*
  Função: AddFornecedores
  Descrição: Coleta informações sobre um novo fornecedor, incluindo nome,
             nome da empresa, contato e uma descrição. Após a coleta, o
             usuário é solicitado a confirmar as informações antes de
             salvá-las em um arquivo de fornecedores. Se o usuário optar
             por salvar, as informações são escritas no final do arquivo,
             utilizando um ID gerado automaticamente.

  Retorno:
    - void: Não retorna nada.
*/
void AddFornecedores() {
    string Nome, NomeEmpresa, Contato, Descricao, Op;

    // Solicita o nome do fornecedor
    cout << "Insira o Nome do Fornecedores: ";
    cin >> Nome;

    system("clear");

    // Solicita o nome da empresa
    cout << "Insira o Nome da Empresa: ";
    cin >> NomeEmpresa;

    system("clear");

    // Solicita o contato do fornecedor
    cout << "Insira o Contato do Fornecedores: ";
    cin >> Contato;

    system("clear");

    // Solicita uma descrição para o fornecedor
    cout << "Insira uma Descricao para o Fornecedor: " << endl;
    cin >> Descricao;

    system("clear");

    // Exibe as informações coletadas para confirmação
    cout << "Nome do Fornecedores: " << Nome << endl;
    cout << "Nome da Empresa: " << NomeEmpresa << endl;
    cout << "Contato do Fornecedor: " << Contato << endl;
    cout << "Descricao do Fornecedores: " << Descricao << endl;
    cout << "Deseja Salvar \n[S].sim [N].Nao\n: ";
    cin >> Op;

    // Se o usuário optar por salvar, escreve os dados no arquivo
    if (Op == "S" || Op == "s") {
        system("clear");
        fstream file(ArquivoFornecedores, ios::app);
        if (file.is_open()) {
            file << "\n" << UltimoID(ArquivoFornecedores) << "," << Nome << "," << NomeEmpresa << "," << Contato << "," << Descricao;
            file.close();
        }
    }
}