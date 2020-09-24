#include <cstdio> // em C substituir por #include <stdio.h>
#include <iostream>
#include "headers/PilhaEncadeada.hpp" 
#include "headers/ListaEncadeada.hpp"
#include "headers/FilaEncadeada.hpp"
#include "headers/Nave.hpp"

using namespace std;
int main() {
  int num_frotas;
  scanf("%d",&num_frotas);
  int i;
  
  PilhaEncadeada* pilhaNaves = new PilhaEncadeada();
  ListaEncadeada* listaNavesCombate = new ListaEncadeada();
  FilaEncadeada* filaAvaria = new FilaEncadeada();

  for(i=0; i < num_frotas; i++){
    int id_nave;
    scanf("%d", &id_nave);
    //desenvolver o código para inserção correta das naves que são lidas
     
    Nave nNave = Nave(id_nave);
    TipoItem nItemNave = TipoItem(id_nave, nNave);
    pilhaNaves->Empilha(nItemNave);
  }
  int operacao;
  while(scanf("%d", &operacao) != EOF) {
    
    
    if(operacao == 0) {
      
      // Enviar nave para combate
      TipoItem tCombate = pilhaNaves->Desempilha();
      Nave n = tCombate.GetNave();
      n.Combate();
      listaNavesCombate->InsereFinal(tCombate);
    } else if(operacao == -1) {
      // Consertar nave
      TipoItem tRemoveAvaria = filaAvaria->Desenfileira();
  
      Nave n = tRemoveAvaria.GetNave();
      pilhaNaves->Empilha(tRemoveAvaria);
      n.Consertada();
    } else if(operacao == -2) {
      // Imprimir pilha de naves prontas para combate
      pilhaNaves->Imprime();
    } else if(operacao == -3) {
      // Imprimir fila de naves avariadas
      filaAvaria->Imprime();
    } else {
      // Inserir nave na fila de avariadas
      int codNave = operacao;
      TipoItem tInsereAvaria  = listaNavesCombate->RemoveItem(codNave);
      Nave n = tInsereAvaria.GetNave();
      filaAvaria->Enfileira(tInsereAvaria);
      n.Avaria();
    }
  }

  return 0;
}
