#include "../../include/Geral.h"

/*
  Função: VerificarLogin
  Descrição: Verifica se o par de login e senha fornecido pelo usuário corresponde
             a um registro existente no arquivo de logins. Se encontrar uma correspondência,
             retorna o cargo associado ao login. Caso contrário, retorna uma string vazia.
  Parâmetros:
    - UserLogin: O nome de usuário fornecido pelo usuário.
    - UserSenha: A senha fornecida pelo usuário.
  Retorno:
    - string: O cargo associado ao login se as credenciais estiverem corretas,
               ou uma string vazia se não houver correspondência.
*/
string VerificarLogin(string UserLogin, string UserSenha) {
    string id, login, senha, cargo, CargoLogin, Saida;

    fstream arquivo(ArquivoLogin);
    while (getline(arquivo, Saida)) {
        stringstream ss(Saida);

        getline(ss, id, ',');      // Lê o ID do login
        getline(ss, login, ',');   // Lê o nome de usuário
        getline(ss, senha, ',');   // Lê a senha
        getline(ss, cargo, ',');   // Lê o cargo

        // Verifica se o login e a senha correspondem
        if (UserLogin == login && UserSenha == senha) {
            CargoLogin = cargo;    // Armazena o cargo se as credenciais estiverem corretas
        }
    }
    return CargoLogin; // Retorna o cargo ou uma string vazia
}
