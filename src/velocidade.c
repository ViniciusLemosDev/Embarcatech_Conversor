#include <stdio.h>
#include "../headers/velocidade.h"

double converterVelocidade(double value, int unidadeOrigem, int unidadeDestino) {
    return value * fatoresConversao[unidadeOrigem][unidadeDestino];
}