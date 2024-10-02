#include "../../include/Geral.h"

void LeitorProdutos() {
    string ID, Nome, Quantidade,Valor , Validade, Limite, Saida;
    fstream file (ArquivoEstoque);
    cout << "-------------------------" << endl;
    while (getline(file, Saida)) {
        stringstream ss(Saida);
        getline(ss, ID, ',');
        getline(ss, Nome, ',');
        getline(ss, Quantidade, ',');
        getline(ss, Valor, ',');
        getline(ss, Validade, ',');
        getline(ss, Limite, ',');

        cout << "ID: " << ID << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor: " << Valor << endl;
        cout << "Validade: " << Validade << endl;
        cout << "Limite: " << Limite << endl;
        cout << "-------------------------" << endl;
    }
}