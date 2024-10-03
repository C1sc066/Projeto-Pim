#include "../../include/Geral.h"

/*
  Função: verificarMenu
  Descrição: Verifica o cargo do usuário e direciona para o menu apropriado.
             Dependendo do cargo fornecido, a função chama a função correspondente
             para exibir o menu do Admin, do Caixa ou do Estoque.
  Parâmetros:
    - Cargo: Uma string que representa o cargo do usuário (Admin, Caixa ou Estoque).
  Retorno: void - Não retorna nada.
*/
void verificarMenu(string Cargo) {
    if (Cargo == "Admin" || Cargo == "admin") {
        MenuAdmin(); // Chama o menu do Admin
    } else if (Cargo == "Caixa" || Cargo == "caixa") {
        MenuCaixa(); // Chama o menu do Caixa
    } else if (Cargo == "Estoque" || Cargo == "estoque") {
        MenuEstoque(); // Chama o menu do Estoque
    }
}
