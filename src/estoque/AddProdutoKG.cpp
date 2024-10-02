#include "../../include/Geral.h"


void AddProdutoKG() {

    string ID, Nome, Quantidade,Valor , Validade, Limite, Op;

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

    cout << "---Confirmacao---" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Quantidade em KG em estoque: " << Quantidade << "KG" << endl;
    cout << "Valor por KG: R$:" << Valor  << endl;
    cout << "Validade do produto: " << Validade << "KG" << endl;
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