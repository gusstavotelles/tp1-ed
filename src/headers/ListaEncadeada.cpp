#include "ListaEncadeada.hpp"
#include <cstddef>
#include <iostream>

ListaEncadeada::ListaEncadeada() : Lista()
{
    this->primeiro = new TipoCelula();
    this->ultimo = this->primeiro;
};

ListaEncadeada::~ListaEncadeada()
{
    Limpa();
    delete this->primeiro;
};

TipoCelula *ListaEncadeada::Posiciona(int pos, bool antes = false)
{
    TipoCelula *p;
    int i;
    if ((pos > tamanho) || (pos <= 0))
        throw "Posicao Invalida!";

    p = this->primeiro;
    for (i = 1; i < pos; i++)
    {
        p = p->prox;
    }

    if (!antes)
        p = p->prox;
    return p;
};

TipoItem ListaEncadeada::GetItem(int pos)
{
    TipoCelula *p;
    p = Posiciona(pos);
    return p->item;
};

void ListaEncadeada::SetItem(TipoItem item, int pos)
{
    TipoCelula *p;
    p = Posiciona(pos);
    p->item = item;
};

void ListaEncadeada::InsereInicio(TipoItem item)
{
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    nova->prox = this->primeiro->prox;
    this->primeiro->prox = nova;
    this->tamanho++;
    if (nova->prox == NULL)
        this->ultimo = nova;
};

void ListaEncadeada::InsereFinal(TipoItem item)
{
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    this->ultimo->prox = nova;
    this->ultimo = nova;
    this->tamanho++;
};

void ListaEncadeada::InserePosicao(TipoItem item, int pos)
{
    TipoCelula *p, *nova;
    p = Posiciona(pos, true);
    nova = new TipoCelula();
    nova->item = item;

    nova->prox = p->prox;
    p->prox = nova;
    this->tamanho++;
    if (nova->prox == NULL)
        this->ultimo = nova;
};

TipoItem ListaEncadeada::RemoveInicio()
{
    ;
    TipoItem aux;
    TipoCelula *p;
    if (tamanho == 0)
        throw "Lista vazia!";
    p = this->primeiro->prox;
    this->primeiro->prox = p->prox;
    tamanho--;
    if (primeiro->prox == NULL)
        this->ultimo = primeiro;
    aux = p->item;
    delete p;
    return aux;
};

TipoItem ListaEncadeada::RemoveFinal()
{
    TipoItem aux;
    TipoCelula *p;
    if (this->tamanho == 0)
        throw "Lista vazia!";

    p = Posiciona(this->tamanho, true);
    p->prox = NULL;
    this->tamanho--;
    aux = this->ultimo->item;
    delete this->ultimo;
    this->ultimo = p;
    return aux;
};

TipoItem ListaEncadeada::RemovePosicao(int pos)
{
    ;
    TipoItem aux;
    TipoCelula *p, *q;
    if (this->tamanho == 0)
        throw "Lista vazia!";

    p = Posiciona(pos, true);
    q = p->prox;
    p->prox = q->prox;
    this->tamanho--;
    aux = q->item;
    delete q;
    if (p->prox == NULL)
        this->ultimo = p;

    return aux;
};

TipoItem ListaEncadeada::Pesquisa(TipoChave c)
{
    TipoItem aux;
    TipoCelula *p;

    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    p = this->primeiro->prox;
    aux.SetChave(-1);

    while (p != NULL)
    {
        if (p->item.GetChave() == c)
        {
            aux = p->item;
            break;
        }
        p = p->prox;
    }
    return aux;
};

void ListaEncadeada::Limpa()
{
    TipoCelula *p;
    p = this->primeiro->prox;
    while (p != NULL)
    {
        this->primeiro->prox = p->prox;
        delete p;
        p = this->primeiro->prox;
    }
    this->ultimo = this->primeiro;
    this->tamanho = 0;
};

TipoItem ListaEncadeada::RemoveItem(TipoChave c)
{
    TipoItem aux;
    TipoCelula *ant;
    TipoCelula *p;
    if (tamanho == 0)
        throw "Lista vazia!";

    p = this->primeiro->prox;
    if (p->item.GetChave() == c)
    {
        aux = p->item;
        if (p->prox == NULL)
        {
            delete p;
        }
        else
        {
            this->primeiro->prox = p->prox;
        }
        this->tamanho--;
    }
    else
    {
        aux.SetChave(-1);
        while (p != NULL)
        {
            if (p->item.GetChave() == c)
            {
                aux = p->item;

                if (p->prox == NULL)
                {
                    delete p;
                    ultimo = ant;
                    ant->prox = NULL;
                }
                else
                {
                    ant->prox = p->prox;
                }
                this->tamanho--;
                break;
            }
            ant = p;
            p = p->prox;
        }
    }

    return aux;
};