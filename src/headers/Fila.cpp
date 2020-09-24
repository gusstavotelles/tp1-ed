#include "Fila.hpp"

Fila::Fila() {
    tamanho = 0;
};

int Fila::GetTamanho() {
    return tamanho;
};

bool Fila::Vazia() {
    return tamanho == 0;
};