#include "../include//Geral.h"
/*
*  Arquivo: main.cpp
*  Descrição: Este é o ponto de entrada do sistema de login. Ele solicita ao usuário que insira o login e a senha,
              verifica as credenciais e redireciona o usuário para o menu adequado com base no tipo de conta.
 */
int main() {
    // Variaveis para armazenar as informações de login e senha
    string Login, Password;

    //Exibe uma mensagem de boas vindas
    cout << "Bem Vindo!" << endl;

    //Solicita o nome de Usuario
    cout << "Por favor digite o usuario: ";
    cin >> Login;

    //Solicita a senha do Usuario
    cout << "Por favor digite sua senha: ";
    cin >> Password;

    // Verifica as credenciais de login e chama a função para exibir o menu apropriado
    verificarMenu(VerificarLogin(Login, Password));

    return 0; // Finaliza o programa com sucesso
}
