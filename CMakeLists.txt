cmake_minimum_required(VERSION 3.29)
project(hortifruti)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(hortifruti
    include/Geral.h
    main/main.cpp
        src/estoque/AddProdutoUnidade.cpp
    src/fornecedores/AddFornecedores.cpp
    src/fornecedores/LerFornecedores.cpp
    src/logins/AddLogin.cpp
    src/logins/LerLogin.cpp
    src/logins/VerificarLogin.cpp
    src/Utilitario/Gerador.cpp
    src/Utilitario/UltimoID.cpp
        menus/Estoque/Estoque.cpp
        src/estoque/AddProdutoKG.cpp
        src/estoque/LerProdutos.cpp
        src/estoque/Alertas.cpp
        menus/Caixa/Caixa.cpp
        menus/Caixa/Submenus/PassarProduto.cpp
        src/caixa/Unidade/SubmenuPassarProduto.cpp
        src/caixa/KG/PassaProdutoKG.cpp
        src/Utilitario/ValorProduto.cpp
        src/Gravador/Gravador.cpp
        src/logins/VerificarMenu.cpp
        menus/Admin/admin.cpp
        menus/Admin/Submenus/Forncedores.cpp
        menus/Admin/Submenus/Logins.cpp)
