#include "../../include/Geral.h"
#include <random>

string Gerador() {
    string dir, final;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 1000);


    dir = ArquivosCaixa;
    final = dir + to_string(dist(gen))+".csv";
    return final;
}