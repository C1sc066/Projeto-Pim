#include "../../include/Geral.h"
#include <random>

/*
  Função: Gerador
  Descrição: Gera um nome de arquivo CSV aleatório, combinando um diretório
             predefinido com um número aleatório entre 1 e 1000.
  Retorno:
    - string: O nome completo do arquivo gerado, incluindo o caminho e a extensão .csv.
*/
string Gerador() {
    string dir, final;
    random_device rd; // Gerador de números aleatórios
    mt19937 gen(rd()); // Motor de geração
    uniform_int_distribution<> dist(1, 1000); // Distribuição uniforme entre 1 e 1000

    dir = ArquivosCaixa; // Diretório pré-definido para os arquivos de caixa
    final = dir + to_string(dist(gen)) + ".csv"; // Combina o diretório com o número aleatório
    return final; // Retorna o nome do arquivo gerado
}
