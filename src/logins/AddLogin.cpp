#include "../../include/Geral.h"

/*
  Função: AddLogin
  Descrição: Solicita ao usuário as informações necessárias para criar um novo login,
             incluindo nome de usuário, senha e cargo. Após a coleta das informações,
             grava os dados no arquivo de login, incluindo o último ID gerado.
  Retorno: void - Não retorna nada.
*/
void AddLogin() {
    string Login, Senha, Cargo;
    int userId, Op = 0; // Inicializa Op para evitar uso de valor não inicializado

    cout << "Login: ";
    cin >> Login;

    system("clear");

    cout << "Senha: ";
    cin >> Senha;

    system("clear");

    // Loop para garantir que o usuário escolha um cargo válido
    while (Op != 1 && Op != 2 && Op != 3) {
        cout << "[1] Admin" << endl;
        cout << "[2] Caixa" << endl;
        cout << "[3] Estoque" << endl;

        cin >> Op; // Lê a opção escolhida
        switch (Op) {
            case 1:
                Cargo = "Admin"; // Define o cargo como Admin
            break;
            case 2:
                Cargo = "Caixa"; // Define o cargo como Caixa
            break;
            case 3:
                Cargo = "Estoque"; // Define o cargo como Estoque
            break;
            default:
                system("clear");
            cout << "Opcao invalida!\n"; // Mensagem de erro para opção inválida
            break;
        }
    }

    // Abre o arquivo de login e grava as informações do novo usuário
    fstream Arquivo(ArquivoLogin, ios::app);
    if (Arquivo.is_open()) {
        Arquivo << "\n" << UltimoID(ArquivoLogin) << "," << Login << "," << Senha << "," << Cargo;
        Arquivo.close(); // Fecha o arquivo
    }
}
