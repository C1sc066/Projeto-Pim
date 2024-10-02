#include "../../include/Geral.h"

void lerLogin() {
    string id, login, senha, cargo, Saida;
    fstream file(ArquivoLogin);
    cout << "_________________________" << endl;
    while (getline(file, Saida)) {
        stringstream ss(Saida);
        getline(ss, id, ',');
        getline(ss, login, ',');
        getline(ss, senha, ',');
        getline(ss, cargo, ',');

        cout << "ID: " << id << endl;
        cout << "Login: " << login << endl;
        cout << "Senha: " << senha << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "_________________________" << endl;

    }
}
