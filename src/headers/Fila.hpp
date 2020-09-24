#ifndef FILA_HPP
#define FILA_HPP

#include "TipoItem.hpp"

class Fila
{
    public:
        Fila();
        int GetTamanho();
        bool Vazia();
        virtual void Enfileira(TipoItem item) = 0;
        virtual TipoItem Desenfileira() = 0;
        virtual void Limpa() = 0;
    protected:
    int tamanho;
};
#endif