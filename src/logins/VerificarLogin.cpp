#include "../../include/Geral.h"

string VerificarLogin(string UserLogin, string UserSenha) {
    string id, login, senha, cargo, CargoLogin, Saida;

    fstream arquivo(ArquivoLogin);
    while (getline(arquivo, Saida)) {
        stringstream ss(Saida);

        getline(ss, id, ',');
        getline(ss, login, ',');
        getline(ss, senha, ',');
        getline(ss, cargo, ',');

        if (UserLogin == login && UserSenha == senha) {
            CargoLogin = cargo;
        }
    }
    return CargoLogin;
}