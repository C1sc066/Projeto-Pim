#include "../../include/Geral.h"

/*
  Função: lerLogin
  Descrição: Lê os dados de login armazenados no arquivo de logins.
             Para cada registro, exibe as informações de ID, login, senha e cargo.
  Retorno: void - Não retorna nada.
*/
void lerLogin() {
    string id, login, senha, cargo, Saida;
    fstream file(ArquivoLogin);
    cout << "_________________________" << endl;

    // Lê cada linha do arquivo de logins
    while (getline(file, Saida)) {
        stringstream ss(Saida);
        getline(ss, id, ',');      // Lê o ID do login
        getline(ss, login, ',');   // Lê o nome de usuário
        getline(ss, senha, ',');   // Lê a senha
        getline(ss, cargo, ',');   // Lê o cargo

        // Exibe as informações lidas
        cout << "ID: " << id << endl;
        cout << "Login: " << login << endl;
        cout << "Senha: " << senha << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "_________________________" << endl;
    }
}
