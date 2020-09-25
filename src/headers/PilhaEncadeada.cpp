#include "./PilhaEncadeada.hpp"
#include <iostream>

PilhaEncadeada::PilhaEncadeada() : Pilha()
{
    this->topo = NULL;
}

PilhaEncadeada::~PilhaEncadeada()
{
    Limpa();
}

void PilhaEncadeada::Empilha(TipoItem item)
{
    TipoCelula *celula;
    celula = new TipoCelula();

    celula->item = item;
    celula->prox = this->topo;
    this->topo = celula;
    this->tamanho++;
};

TipoItem PilhaEncadeada::Desempilha()
{
    TipoItem aux;
    TipoCelula *p;
    if (this->tamanho == 0)
    {
        throw "Pilha vazia!";
    }
    p = this->topo;
    aux = p->item;
    this->topo = topo->prox;
    delete p;
    this->tamanho--;
    return aux;
};

void PilhaEncadeada::Limpa()
{
    while (!Vazia())
    {
        Desempilha();
    }
}

void PilhaEncadeada::Imprime()
{
    TipoCelula *p;
    p = this->topo;
    while (p != NULL)
    {
        p->item.Imprime();
        p = p->prox;
    }
}
