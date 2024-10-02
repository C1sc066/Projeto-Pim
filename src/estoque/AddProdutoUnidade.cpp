#include "../../include/Geral.h"


void AddProdutoUnidade() {

    string ID, Nome, Quantidade,Valor , Validade, Limite, Op;

    cout << "Entre com o nome do produto: ";
    cin >> Nome;

    cout << "Quantidade do produto: ";
    cin >> Quantidade;

    cout << "Valor do produto: R$:";
    cin >> Valor;

    cout << "Validade do produto: ";
    cin >> Validade;

    cout << "Limite para alerta: ";
    cin >> Limite;

    cout << "---Confirmacao---" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Quantidade: " << Quantidade << endl;
    cout << "Valor: R$:" << Valor << endl;
    cout << "Validade do produto: " << Validade << endl;
    cout << "Limite: " << Limite << endl;
    cout << "-------------" << endl;
    cout << "[S] Para Salvar [N] Para nao Salvar: " << endl;
    cin >> Op;
    if (Op == "S" || Op == "s") {
        fstream arquivo(ArquivoEstoque, ios::app);
        if (arquivo.is_open()) {
            arquivo << "\n" <<UltimoID(ArquivoEstoque) << "," << Nome << "," << Quantidade << "," << Valor << "," << Validade
            << "," << Limite
            ;
        }else {
            cout << "Arquivo nao foi possivel abrir" << endl;
        }
    }
}