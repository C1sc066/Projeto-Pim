#include "../../include/Geral.h"

float ValorProdutoKG(string ID, string peso) {
    string Saida, PID, Nome, Quantidade, Valor;
    float PesoProduto, ValorProduto, Total;
    fstream arquivo(ArquivoEstoque);
    while (getline(arquivo, Saida)) {
        stringstream ss(Saida);
        getline(ss, PID, ',');
        getline(ss, Nome, ',');
        getline(ss, Quantidade, ',');
        getline(ss, Valor, ',');

        if (ID == PID) {
            ValorProduto = stof(Valor);
            PesoProduto = stof(peso);
            Total = ValorProduto * PesoProduto;
        }
    }
    return Total;
}
