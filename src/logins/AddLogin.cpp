#include "../../include/Geral.h"

//Pegar o ultimo ID da lista


void AddLogin() {
    string Login, Senha, Cargo;
    int userId, Op;

    cout << "Login: ";
    cin >> Login;

    system("clear");

    cout << "Senha: ";
    cin >> Senha;

    system("clear");


    while (Op != 1 && Op != 2 && Op != 3) {
        cout << "[1] Admin" << endl;
        cout << "[2] Caixa" << endl;
        cout << "[3] Estoque" << endl;

        cin >> Op;
        switch (Op) {
            case 1:
                Cargo = "Admin";
                break;
            case 2:
                Cargo = "Caixa";
                break;
            case 3:
                Cargo = "Estoque";
                break;
            default:
                system("clear");
                cout << "Opcao invalida!\n";
                break;
        }
    }
    fstream Arquivo(ArquivoLogin, ios::app);
    if (Arquivo.is_open()) {
        Arquivo << "\n" << UltimoID(ArquivoLogin) << "," << Login << "," << Senha << "," << Cargo;
        Arquivo.close();
    }
}
