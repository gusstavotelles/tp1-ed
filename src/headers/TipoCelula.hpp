#ifndef TIPO_CELULA_HPP
#define TIPO_CELULA_HPP
#include "TipoItem.hpp"

class TipoCelula
{
public:
    TipoCelula();

private:
    TipoItem item;
    TipoCelula *prox;

    friend class PilhaEncadeada;
    friend class FilaEncadeada;
    friend class ListaEncadeada;
};
#endif