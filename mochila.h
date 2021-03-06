#ifndef MOCHILA_H
#define MOCHILA_H

#include <string>
#include <vector>

using namespace std;

struct Item
{
    string nome;
    float beneficio;
    float peso;
};
struct ItemString
{
    string nome;
    string beneficio;
    string peso;
};
struct ConfigBag
{
    float peso_suportado;
    int populacao;
    int qt_itens;
    int timeout_sec;

};

struct ConfigBagString
{
    string peso_suportado;
    string populacao;
    string qt_itens;
    string timeout_sec;

};

class Mochila
{
public:
    vector<Item> cromossomo;
    float fitness = 0;
    float peso = 0;
    float repeticao = 0;
    Mochila(vector<Item> _cromossomo);
    Mochila crossover(Mochila m2);
    Item mutacao(vector<Item> _cromossomo);
    void setFitness();
    void setPeso();
    void setRepeticao(Item itens[], int qtd_itens);
};

#endif // MOCHILA_H
