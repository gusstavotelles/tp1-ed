#include <cstdio>
#include <iostream>
#include "headers/PilhaEncadeada.hpp"
#include "headers/ListaEncadeada.hpp"
#include "headers/FilaEncadeada.hpp"
#include "headers/Nave.hpp"

using namespace std;
int main()
{
  int num_frotas;
  scanf("%d", &num_frotas);
  int i;

  PilhaEncadeada *navesOk = new PilhaEncadeada();
  ListaEncadeada *navesComb = new ListaEncadeada();
  FilaEncadeada *navesAvariadas = new FilaEncadeada();

  for (i = 0; i < num_frotas; i++)
  {
    int idNave;
    scanf("%d", &idNave);

    Nave nave = Nave(idNave);
    TipoItem itemNave = TipoItem(idNave, nave);
    navesOk->Empilha(itemNave);
  }
  int operacao;
  while (scanf("%d", &operacao) != EOF)
  {

    // 0 - Nave sai
    // -1 - Nave é consertada
    // -2 - Mostra naves Consertadas em ordem de aptidão
    // -3 - Mostra naves avariadas em ordem de prioridade
    // default - Nave chega
    switch (operacao)
    {
    case 0:
    {
      TipoItem itemComb = navesOk->Desempilha();
      Nave n1 = itemComb.GetNave();
      n1.Combate();
      navesComb->InsereFinal(itemComb);
      break;
    }

    case -1:
    {
      TipoItem consertaNave = navesAvariadas->Desenfileira();
      Nave n2 = consertaNave.GetNave();
      navesOk->Empilha(consertaNave);
      n2.Consertada();
      break;
    }

    case -2:
    {
      navesOk->Imprime();
      break;
    }

    case (-3):
    {
      navesAvariadas->Imprime();
      break;
    }

    default:
    {
      int codNave = operacao;
      TipoItem danificaNave = navesComb->RemoveItem(codNave);
      Nave n3 = danificaNave.GetNave();
      navesAvariadas->Enfileira(danificaNave);
      n3.Avaria();
      break;
    }
    }
  }
  return 0;
}
