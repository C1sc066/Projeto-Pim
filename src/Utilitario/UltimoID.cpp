#include "../../include/Geral.h"

/*
  Função: UltimoID
  Descrição: Lê um arquivo e determina o último ID registrado nas entradas,
             retornando o próximo ID disponível incrementado em 1.
  Parâmetros:
    - string arquivo: O caminho do arquivo de onde os IDs serão lidos.
  Retorno:
    - int: O próximo ID disponível, que é o maior ID encontrado mais 1.
*/
int UltimoID(string arquivo) {
    string ID, Saida;
    int AID;

    // Abre o arquivo
    fstream Arquivo(arquivo);

    // Lê linha por linha do arquivo
    while (getline(Arquivo, Saida)) {
        stringstream ss(Saida);
        // Pega o ID de cada linha
        getline(ss, ID, ',');
    }

    // Converte o último ID lido para inteiro e incrementa em 1
    return AID = stoi(ID) + 1;
}
