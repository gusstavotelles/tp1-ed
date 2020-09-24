#include "Lista.hpp"

Lista::Lista()
{
    tamanho = 0;
};

int Lista::GetTamanho()
{
    return tamanho;
};

bool Lista::Vazia()
{
    return tamanho == 0;
};