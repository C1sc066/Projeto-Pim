#include "../../include/Geral.h"

/*
  Função: ValorProdutoKG
  Descrição: Calcula o valor total de um produto com base no seu ID e peso.
             A função lê os dados do produto a partir de um arquivo e multiplica
             o valor por quilo pelo peso fornecido.
  Parâmetros:
    - string ID: O identificador do produto.
    - string peso: O peso do produto em quilogramas.
  Retorno:
    - float: O valor total do produto com base no peso e no valor por quilo.
*/
float ValorProdutoKG(string ID, string peso) {
    string Saida, PID, Nome, Quantidade, Valor;
    float PesoProduto, ValorProduto, Total = 0.0; // Inicializa Total em 0.0
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
            break; // Sai do loop após encontrar o produto
        }
    }

    return Total;
}
