#include "TipoItem.hpp"
#include <iostream>

TipoItem::TipoItem() {
    chave = -1; 
}


TipoItem::TipoItem(TipoChave c){
    chave = c;
}

TipoItem::TipoItem(TipoChave c, Nave n){
    chave = c;
    nave = n;
}

void TipoItem::SetChave(TipoChave c) {
    chave = c;
}

TipoChave TipoItem::GetChave(){
    return chave;
}


void TipoItem::SetNave(Nave n) {
    nave = n;
}

Nave TipoItem::GetNave(){
    return nave;
}

void TipoItem::Imprime(){
    std::cout << this->chave << "\n";
}