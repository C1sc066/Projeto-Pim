#include "../../../include/Geral.h"

/*
  Função: PassaProdutoKG
  Descrição: Processa a passagem de produtos por quilograma.
  Solicita o ID e peso do produto e grava essas informações em um arquivo especificado.
  Retorno:
    - void: Não retorna nada.
*/
void PassaProdutoKG(string arc) {
    string ID, Quantidade; // Variáveis para armazenar o ID do produto e o peso
    string Op;             // Variável para armazenar a opção do usuário

    while (true) {
        cout << "ID produto: ";
        cin >> ID; // Solicita o ID do produto

        cout << "Peso do produto: ";
        cin >> Quantidade; // Solicita o peso do produto

        ofstream Arquivo(arc, ios::app); // Abre o arquivo para adicionar os dados
        if (Arquivo.is_open()) {
            // Grava ID, peso e valor do produto no arquivo
            Arquivo << ID << "," << Quantidade << "," << ValorProdutoKG(ID, Quantidade) << endl;
            Arquivo.close(); // Fecha o arquivo
        } else {
            cout << "Erro"; // Exibe mensagem de erro se o arquivo não puder ser aberto
            break; // Sai do loop em caso de erro
        }

        cout << "Deseja passar outro produto S/N :";
        cin >> Op; // Pergunta se o usuário deseja continuar
        if (Op == "N" || Op == "n") { // Sai do loop se a resposta for não
            break;
        }
    }
}
