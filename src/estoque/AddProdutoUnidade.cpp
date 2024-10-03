#include "../../include/Geral.h"

/*
  Função: AddProdutoUnidade
  Descrição: Adiciona um novo produto ao estoque em unidades.
             Solicita ao usuário informações como nome do produto,
             quantidade, valor, validade e limite para alerta.
  Retorno: void - Não retorna nada.
*/
void AddProdutoUnidade() {
    string ID, Nome, Quantidade, Valor, Validade, Limite, Op; // Variáveis para armazenar os dados do produto

    cout << "Entre com o nome do produto: ";
    cin >> Nome; // Solicita o nome do produto

    cout << "Quantidade do produto: ";
    cin >> Quantidade; // Solicita a quantidade do produto

    cout << "Valor do produto: R$: ";
    cin >> Valor; // Solicita o valor do produto

    cout << "Validade do produto: ";
    cin >> Validade; // Solicita a validade do produto

    cout << "Limite para alerta: ";
    cin >> Limite; // Solicita o limite para alerta

    cout << "---Confirmação---" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Quantidade: " << Quantidade << endl;
    cout << "Valor: R$: " << Valor << endl;
    cout << "Validade do produto: " << Validade << endl;
    cout << "Limite: " << Limite << endl;
    cout << "-------------" << endl;
    cout << "[S] Para Salvar [N] Para não Salvar: " << endl;
    cin >> Op; // Pergunta se o usuário deseja salvar

    if (Op == "S" || Op == "s") {
        fstream arquivo(ArquivoEstoque, ios::app); // Abre o arquivo para adicionar os dados
        if (arquivo.is_open()) {
            // Grava os dados do produto no arquivo
            arquivo << "\n" << UltimoID(ArquivoEstoque) << "," << Nome << "," << Quantidade << "," << Valor << "," << Validade << "," << Limite;
            arquivo.close(); // Fecha o arquivo
        } else {
            cout << "Arquivo não foi possível abrir" << endl; // Mensagem de erro se o arquivo não puder ser aberto
        }
    }
}
