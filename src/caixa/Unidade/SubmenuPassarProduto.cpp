#include "../../../include/Geral.h"

/*
  Função: PassarProdutoUnidade
  Descrição: Processa a passagem de produtos por unidade.
             Solicita ao usuário o ID do produto e a quantidade do produto,
             e grava essas informações, juntamente com o valor do produto,
             em um arquivo especificado.
*/
void PassarProdutoUnidade(string Arquivo) {
    string ID, Quantidade, Op; // Variáveis para armazenar o ID do produto, a quantidade e a opção do usuário
    while (true) {
        cout << "ID produto: ";
        cin >> ID; // Solicita o ID do produto

        cout << "Quantidade produto: ";
        cin >> Quantidade; // Solicita a quantidade do produto

        ofstream arc(Arquivo, ios::app); // Abre o arquivo para adicionar os dados
        if (arc.is_open()) {
            // Grava ID, quantidade e valor do produto no arquivo
            arc << ID << "," << Quantidade << "," << ValorProdutoKG(ID, Quantidade) << endl;
            arc.close(); // Fecha o arquivo
        } else {
            cout << "Erro"; // Exibe mensagem de erro se o arquivo não puder ser aberto
            break; // Sai do loop em caso de erro
        }

        cout << "Deseja passar outro produto S/N :";
        cin >> Op; // Pergunta se o usuário deseja continuar
        if (Op == "N" || Op == "n") {
            // Sai do loop se a resposta for não
            break;
        }
    }
}
