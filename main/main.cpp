#include "../include//Geral.h"

int main() {
    string Login, Password;

    cout << "Bem Vindo!" << endl;
    cout << "Por favor digite o usuario: ";
    cin >> Login;
    cout << "Por favor digite sua senha: ";
    cin >> Password;

    verificarMenu(VerificarLogin(Login, Password));

    return 0;
}