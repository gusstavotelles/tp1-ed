#include "./Pilha.hpp"

bool Pilha::Vazia()
{
  return this->tamanho == 0;
};

int Pilha::GetTamanho()
{
  return this->tamanho;
};