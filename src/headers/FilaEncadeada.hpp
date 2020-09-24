#ifndef FILA_ENCADEADA_HPP
#define FILA_ENCADEADA_HPP

#include "Fila.hpp"
#include "TipoCelula.hpp"

class FilaEncadeada : public Fila
{
public:
    FilaEncadeada();
    virtual ~FilaEncadeada();
    void Enfileira(TipoItem item);
    TipoItem Desenfileira();
    void Limpa();
    void Imprime();

private:
    TipoCelula *frente;
    TipoCelula *tras;
};
#endif