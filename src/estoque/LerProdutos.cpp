#include "../../include/Geral.h"

/*
  Função: AddProdutoKG
  Descrição: Solicita ao usuário as informações de um novo produto em
             quilogramas, incluindo nome, quantidade em estoque, valor,
             validade e limite para alerta. Após a coleta das informações,
             exibe uma confirmação e permite que o usuário escolha salvar
             os dados no arquivo de estoque.
  Retorno: void - Não retorna nada.
*/
void AddProdutoKG() {
    string ID, Nome, Quantidade, Valor, Validade, Limite, Op; // Variáveis para armazenar os dados do produto

    cout << "Entre com o nome do produto: ";
    cin >> Nome;

    cout << "Quantidade em KG em estoque: ";
    cin >> Quantidade;

    cout << "Valor por KG: R$:";
    cin >> Valor;

    cout << "Validade do produto: ";
    cin >> Validade;

    cout << "Limite para alerta: ";
    cin >> Limite;

    // Exibe as informações coletadas
    cout << "---Confirmacao---" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Quantidade em KG em estoque: " << Quantidade << "KG" << endl;
    cout << "Valor por KG: R$:" << Valor << endl;
    cout << "Validade do produto: " << Validade << endl;
    cout << "Limite: " << Limite << endl;
    cout << "-------------" << endl;
    cout << "[S] Para Salvar [N] Para nao Salvar: " << endl;
    cin >> Op;

    if (Op == "S" || Op == "s") { // Se o usuário optar por salvar
        fstream arquivo(ArquivoEstoque, ios::app); // Abre o arquivo de estoque
        if (arquivo.is_open()) {
            // Escreve os dados do produto no arquivo
            arquivo << "\n" << UltimoID(ArquivoEstoque) << "," << Nome << "," << Quantidade << "," << Valor << "," << Validade << "," << Limite;
        } else {
            cout << "Arquivo nao foi possivel abrir" << endl; // Mensagem de erro se o arquivo não puder ser aberto
        }
    }
}