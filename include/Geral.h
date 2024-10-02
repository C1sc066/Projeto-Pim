#ifndef GERAL_H
#define GERAL_H
//Bibliotecas
#include <iostream>
#include <sstream>
#include <fstream>
#include <unistd.h>
#include <vector>
#include <string>
#include <iomanip> // Para std::fixed e std::setprecision
#include <cstdio>  // Para remove e rename

using namespace std;
//Funções


//Login
void AddLogin();
string VerificarLogin(string UserLogin, string UserSenha);
void lerLogin();
void verificarMenu(string Cargo);


//Fornecedores
void AddFornecedores();
void LerFornecedores();




//Funções de uso geral
int UltimoID(string arquivo);


//Estoque
void AddProdutoUnidade();
void AddProdutoKG();
void LeitorProdutos();
void AlertasEstoque();


//Caixa
void PassarProdutoUnidade(string Arquivo);
void PassaProdutoKG(string arc);


//Funções
string Gerador();
float ValorProdutoKG(string ID, string peso);


//Menus
void MenuEstoque();
void MenuCaixa();
void MenuAdmin();

//Submenu

//Submenu Caixa
void SubmenuPassarProduto(string Arquivo);

//Submenu Admin
void SubmenusForce();
void SubmenuLogins();


//Gravador do capeta
void Gravador(string CaminhoDBEstoque, string CaminhoArqTemp);

//Local de arquivos
const string ArquivoEstoque = "/home/cisco/Documentos/hortifruti/DBS/Estoque/Estoque.csv";
const string ArquivoLogin = "/home/cisco/Documentos/hortifruti/DBS/Logins/Login.csv";
const string ArquivoFornecedores = "/home/cisco/Documentos/hortifruti/DBS/Fornecedores/Fornecedores.csv";
const string ArquivosCaixa = "/home/cisco/Documentos/hortifruti/DBS/Caixa/";
#endif //GERAL_H
