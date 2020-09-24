#ifndef PILHA_HPP
#define PILHA_HPP

#include "TipoItem.hpp"

class Pilha
{
public:
    Pilha() { tamanho = 0; };
    int GetTamanho();
    bool Vazia();
    virtual void Empilha(TipoItem item) = 0;
    virtual TipoItem Desempilha() = 0;
    virtual void Limpa() = 0;

protected:
    int tamanho = 0;
};
#endif
