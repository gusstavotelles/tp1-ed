#ifndef LISTA_ENCADEADA_HPP
#define LISTA_ENCADEADA_HPP
#include "Lista.hpp"
#include "TipoCelula.hpp"

class ListaEncadeada : public Lista
{
public:
    ListaEncadeada();
    ~ListaEncadeada();
    TipoItem GetItem(int pos);
    void SetItem(TipoItem item, int pos);
    void InserePosicao(TipoItem item, int pos);
    void InsereInicio(TipoItem item);
    void InsereFinal(TipoItem item);
    TipoItem RemoveInicio();
    TipoItem RemoveFinal();
    TipoItem RemovePosicao(int pos);
    TipoItem Pesquisa(TipoChave c);
    TipoItem RemoveItem(TipoChave c);
    void Limpa();

private:
    TipoCelula *primeiro;
    TipoCelula *ultimo;
    TipoCelula *Posiciona(int pos, bool antes);
};
#endif