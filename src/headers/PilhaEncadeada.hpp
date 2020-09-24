#ifndef PILHA_ARRANJO_HPP
#define PILHA_ARRANJO_HPP
#include <cstddef>

#include "./Nave.hpp"
#include "./Pilha.hpp"

#include "./TipoItem.hpp"
#include "./TipoCelula.hpp"

class PilhaEncadeada : public Pilha
{
public:
    PilhaEncadeada();
    virtual ~PilhaEncadeada();
    void Empilha(TipoItem item);
    TipoItem Desempilha();
    void Limpa();
    void Imprime();

private:
    TipoCelula *topo;
};
;
#endif