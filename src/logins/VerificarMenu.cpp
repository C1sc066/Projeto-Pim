#include "../../include/Geral.h"

void verificarMenu(string Cargo) {
    if (Cargo == "Admin" || Cargo == "admin") {
        MenuAdmin();
    } else if (Cargo == "Caixa" || Cargo == "caixa") {
        MenuCaixa();
    }else if (Cargo == "Estoque" || Cargo == "estoque") {
        MenuEstoque();
    }
}
