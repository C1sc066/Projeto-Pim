#include "../../include/Geral.h"

/*
  Função: LerFornecedores
  Descrição: Lê os dados dos fornecedores do arquivo de fornecedores e
             exibe suas informações na tela. Cada fornecedor é apresentado
             com seu ID, nome, nome da empresa, contato e descrição.
  Retorno: void - Não retorna nada.
*/
void LerFornecedores() {
    string ID, Nome, NomeEmpresa, Contato, Descricao, Saida; // Variáveis para armazenar os dados do fornecedor
    fstream file(ArquivoFornecedores); // Abre o arquivo de fornecedores
    cout << "_________________________" << endl;

    while (getline(file, Saida)) { // Lê cada linha do arquivo
        stringstream ss(Saida); // Cria um fluxo de string a partir da linha lida
        getline(ss, ID, ','); // Lê o ID
        getline(ss, Nome, ','); // Lê o nome do fornecedor
        getline(ss, NomeEmpresa, ','); // Lê o nome da empresa
        getline(ss, Contato, ','); // Lê o contato
        getline(ss, Descricao, ','); // Lê a descrição

        // Exibe as informações do fornecedor
        cout << "ID: " << ID << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Nome da Empresa: " << NomeEmpresa << endl;
        cout << "Contato: " << Contato << endl;
        cout << "Descricao: " << Descricao << endl;
        cout << "_________________________" << endl;
    }
}