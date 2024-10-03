#include "../../../include/Geral.h"
/*
  Função: SubmenuLogins
  Descrição: Exibe o submenu para gerenciamento de logins do sistema, permitindo que o usuário escolha entre ver ou adicionar novos logins.
*/

void SubmenuLogins() {
  // Variável para armazenar a opção escolhida pelo usuário
  int op;

  // Exibe as opções do submenu de logins
  cout << "[1] Ver Logins do Sistema" << endl;
  cout << "[2] Adicionar Novos Logins" << endl;
  cout << "[3] Sair" << endl;
  cout << ": ";

  // Solicita que o usuário insira uma opção
  cin >> op;

  // Verifica a opção escolhida e chama a função correspondente
  switch (op) {
    case 1:
      lerLogin(); // Chama a função para listar os logins existentes
    break;
    case 2:
      AddLogin(); // Chama a função para adicionar novos logins
    break;
    case 3:
      break; // Encerra o submenu e retorna ao menu anterior
    default:
      // Exibe uma mensagem de erro caso a opção seja inválida
        cout << "Operador Invalido" << endl;
  }
}