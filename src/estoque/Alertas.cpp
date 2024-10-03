#include "../../include/Geral.h"

/*
  Função: AlertasEstoque
  Descrição: Verifica os produtos em estoque e exibe aqueles cuja quantidade
             está abaixo ou igual ao limite estabelecido. Lê os dados dos produtos
             a partir do arquivo de estoque e exibe informações relevantes para
             cada produto que atende ao critério.
  Retorno: void - Não retorna nada.
*/
void AlertasEstoque() {
    string Saida, STRID, Nome, Quantidade, Valor, Validade, STRLimite; // Variáveis para armazenar os dados do produto
    float AQuantidade, Limite; // Variáveis para armazenar quantidade atual e limite

    fstream arquivo(ArquivoEstoque); // Abre o arquivo de estoque
    cout << "-------------------------" << endl;
    while (getline(arquivo, Saida)) { // Lê cada linha do arquivo
        stringstream ss(Saida); // Cria um stream para processar a linha
        getline(ss, STRID, ','); // Lê o ID do produto
        getline(ss, Nome, ','); // Lê o nome do produto
        getline(ss, Quantidade, ','); // Lê a quantidade do produto
        getline(ss, Valor, ','); // Lê o valor do produto
        getline(ss, Validade, ','); // Lê a validade do produto
        getline(ss, STRLimite, ','); // Lê o limite do produto

        AQuantidade = stof(Quantidade); // Converte a quantidade para float
        Limite = stof(STRLimite); // Converte o limite para float

        if (AQuantidade <= Limite) { // Verifica se a quantidade está abaixo ou igual ao limite
            // Exibe as informações do produto
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
