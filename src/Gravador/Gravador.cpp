#include "../../include/Geral.h"

/*
  Função: LerBase1
  Descrição: Lê os produtos da Base1 a partir do arquivo especificado e
             armazena cada linha em um vetor.
  Parâmetros:
    - const string& caminho: O caminho do arquivo da Base1.
    - vector<string>& produtos: O vetor onde os produtos serão armazenados.
  Retorno: void - Não retorna nada.
*/
void LerBase1(const string& caminho, vector<string>& produtos) {
    string linha;
    ifstream arquivoBase1(caminho);
    while (getline(arquivoBase1, linha)) {
        produtos.push_back(linha);
    }
    arquivoBase1.close();
}

/*
  Função: AtualizarQuantidades
  Descrição: Atualiza a quantidade dos produtos no vetor com base nas vendas
             registradas em um arquivo. Cada linha do arquivo de vendas deve
             conter o ID do produto e a quantidade vendida.
  Parâmetros:
    - vector<string>& produtos: O vetor de produtos a ser atualizado.
    - const string& caminhoVendas: O caminho do arquivo que contém as vendas.
  Retorno: void - Não retorna nada.
*/
void AtualizarQuantidades(vector<string>& produtos, const string& caminhoVendas) {
    string linha;
    ifstream arquivoVendas(caminhoVendas);
    while (getline(arquivoVendas, linha)) {
        stringstream ss(linha);
        string id;
        int quantidadeVendida;

        getline(ss, id, ','); // Lê o ID do produto
        ss >> quantidadeVendida; // Lê a quantidade vendida

        // Atualiza a quantidade no vetor de produtos
        for (auto& produto : produtos) {
            stringstream produtoStream(produto);
            string produtoID, nome;
            int quantidade;
            float valor;
            string validade, alerta;

            getline(produtoStream, produtoID, ',');
            getline(produtoStream, nome, ',');
            produtoStream >> quantidade;
            produtoStream.ignore(); // Ignora a vírgula
            produtoStream >> valor;
            produtoStream.ignore(); // Ignora a vírgula
            getline(produtoStream, validade, ',');
            getline(produtoStream, alerta);

            // Se o ID do produto corresponde, atualiza a quantidade
            if (produtoID == id) {
                quantidade -= quantidadeVendida; // Atualiza a quantidade

                // Cria um stringstream para formatar o valor
                stringstream valorStream;
                valorStream << fixed << setprecision(2) << valor; // Formata o valor

                produto = produtoID + "," + nome + "," + to_string(quantidade) + "," +
                          valorStream.str() + "," + validade + "," + alerta;
            }
        }
    }
    arquivoVendas.close();
}

/*
  Função: GravarBase1
  Descrição: Grava as informações atualizadas dos produtos de volta na Base1,
             sobrescrevendo o arquivo existente.
  Parâmetros:
    - const string& caminhoBase1: O caminho do arquivo da Base1.
    - const vector<string>& produtos: O vetor de produtos a ser gravado.
  Retorno: void - Não retorna nada.
*/
void GravarBase1(const string& caminhoBase1, const vector<string>& produtos) {
    ofstream arquivoBase1(caminhoBase1);
    for (const auto& produto : produtos) {
        arquivoBase1 << produto << "\n"; // Grava cada linha
    }
    arquivoBase1.close();
}

/*
  Função: Gravador
  Descrição: Função principal para gerenciar o processo de leitura dos produtos
             da Base1, atualização das quantidades com base nas vendas e gravação
             das informações atualizadas de volta na Base1.
  Parâmetros:
    - string CaminhoDBEstoque: O caminho do arquivo da Base1 (estoque).
    - string CaminhoArqTemp: O caminho do arquivo que contém as vendas.
  Retorno: void - Não retorna nada.
*/
void Gravador(string CaminhoDBEstoque, string CaminhoArqTemp) {
    // Lê produtos da Base1
    vector<string> produtos; // Vetor para armazenar linhas da Base1
    LerBase1(CaminhoDBEstoque, produtos);

    // Atualiza a quantidade de produtos conforme as vendas
    AtualizarQuantidades(produtos, CaminhoArqTemp);

    // Grava os produtos atualizados na Base1
    GravarBase1(CaminhoDBEstoque, produtos);
}
