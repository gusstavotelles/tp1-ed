#ifndef LISTA_HPP
#define LISTA_HPP

#include "TipoItem.hpp"

class Lista
{
public:
    Lista();
    int GetTamanho();
    bool Vazia();
    virtual TipoItem GetItem(int pos) = 0;
    virtual void SetItem(TipoItem item, int pos) = 0;
    virtual void InsereInicio(TipoItem item) = 0;
    virtual void InsereFinal(TipoItem item) = 0;
    virtual void InserePosicao(TipoItem item, int pos) = 0;
    virtual TipoItem RemoveInicio() = 0;
    virtual TipoItem RemoveFinal() = 0;
    virtual TipoItem RemovePosicao(int pos) = 0;
    virtual TipoItem Pesquisa(TipoChave c) = 0;
    virtual void Limpa() = 0;

protected:
    int tamanho;
};
#endif