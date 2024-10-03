#include "../../include/Geral.h"

/*
  Função: AddProdutoKG
  Descrição: Adiciona um novo produto ao estoque em quilogramas.
             Solicita ao usuário informações como nome do produto,
             quantidade, valor, validade e limite para alerta.
  Retorno: void - Não retorna nada.
*/
void AddProdutoKG() {
    string ID, Nome, Quantidade, Valor, Validade, Limite, Op; // Variáveis para armazenar os dados do produto

    cout << "Entre com o nome do produto: ";
    cin >> Nome; // Solicita o nome do produto

    cout << "Quantidade em KG em estoque: ";
    cin >> Quantidade; // Solicita a quantidade em KG

    cout << "Valor por KG: R$: ";
    cin >> Valor; // Solicita o valor por KG

    cout << "Validade do produto: ";
    cin >> Validade; // Solicita a validade do produto

    cout << "Limite para alerta: ";
    cin >> Limite; // Solicita o limite para alerta

    cout << "---Confirmação---" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Quantidade em KG em estoque: " << Quantidade << " KG" << endl;
    cout << "Valor por KG: R$: " << Valor << endl;
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
