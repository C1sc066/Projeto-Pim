#ifndef GERAL_H
#define GERAL_H

// Bibliotecas
#include <iostream>
#include <sstream>
#include <fstream>
#include <unistd.h>
#include <vector>
#include <string>
#include <iomanip> // Para std::fixed e std::setprecision
#include <cstdio>  // Para remove e rename

using namespace std;

// Funções de login
void AddLogin();                                // Adiciona um novo login ao sistema
string VerificarLogin(string UserLogin, string UserSenha); // Verifica se o login e senha são válidos
void lerLogin();                                // Lê e exibe os logins existentes
void verificarMenu(string Cargo);               // Verifica o cargo do usuário e exibe o menu apropriado

// Funções relacionadas a fornecedores
void AddFornecedores();                         // Adiciona novos fornecedores ao sistema
void LerFornecedores();                         // Lê e exibe a lista de fornecedores

// Funções de uso geral
int UltimoID(string arquivo);                   // Retorna o último ID registrado no arquivo

// Funções de gerenciamento de estoque
void AddProdutoUnidade();                       // Adiciona produtos ao estoque por unidade
void AddProdutoKG();                            // Adiciona produtos ao estoque por quilograma
void LeitorProdutos();                          // Lê e exibe a lista de produtos no estoque
void AlertasEstoque();                          // Exibe alertas e avisos sobre o estoque

// Funções relacionadas ao caixa
void PassarProdutoUnidade(string Arquivo);      // Processa a passagem de produtos por unidade
void PassaProdutoKG(string arc);                 // Processa a passagem de produtos por quilograma

// Funções auxiliares
string Gerador();                               // Gera um novo ID
float ValorProdutoKG(string ID, string peso);   // Calcula o valor de um produto com base em seu ID e peso

// Funções de menu
void MenuEstoque();                             // Exibe o menu de gerenciamento de estoque
void MenuCaixa();                               // Exibe o menu do caixa
void MenuAdmin();                               // Exibe o menu do administrador

// Submenus
void SubmenuPassarProduto(string Arquivo);      // Exibe o submenu para passar produtos
void SubmenusForce();                           // Exibe o submenu de fornecedores
void SubmenuLogins();                           // Exibe o submenu de logins

// Função para gravar dados no sistema
void Gravador(string CaminhoDBEstoque, string CaminhoArqTemp); // Grava dados no arquivo temporário

// Constantes de caminho de arquivos
const string ArquivoEstoque = "/home/cisco/Documentos/hortifruti/DBS/Estoque/Estoque.csv";         // Caminho do arquivo de estoque
const string ArquivoLogin = "/home/cisco/Documentos/hortifruti/DBS/Logins/Login.csv";               // Caminho do arquivo de logins
const string ArquivoFornecedores = "/home/cisco/Documentos/hortifruti/DBS/Fornecedores/Fornecedores.csv"; // Caminho do arquivo de fornecedores
const string ArquivosCaixa = "/home/cisco/Documentos/hortifruti/DBS/Caixa/";                       // Caminho do diretório de caixa

#endif // GERAL_H
