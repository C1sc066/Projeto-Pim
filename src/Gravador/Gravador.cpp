#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip> // Para std::fixed e std::setprecision
#include <cstdio>  // Para remove e rename

using namespace std;

// Função para ler produtos da Base1 e armazenar em um vetor
void LerBase1(const string& caminho, vector<string>& produtos) {
    string linha;
    ifstream arquivoBase1(caminho);
    while (getline(arquivoBase1, linha)) {
        produtos.push_back(linha);
    }
    arquivoBase1.close();
}

// Função para atualizar a quantidade de produtos conforme as vendas
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

// Função para gravar os produtos atualizados na Base1
void GravarBase1(const string& caminhoBase1, const vector<string>& produtos) {
    ofstream arquivoBase1(caminhoBase1);
    for (const auto& produto : produtos) {
        arquivoBase1 << produto << "\n"; // Grava cada linha
    }
    arquivoBase1.close();
}

void Gravador(string CaminhoDBEstoque, string CaminhoArqTemp) {

    // Lê produtos da Base1
    vector<string> produtos; // Vetor para armazenar linhas da Base1
    LerBase1(CaminhoDBEstoque, produtos);

    // Atualiza a quantidade de produtos conforme as vendas
    AtualizarQuantidades(produtos, CaminhoArqTemp);

    // Grava os produtos atualizados na Base1
    GravarBase1(CaminhoDBEstoque, produtos);

}