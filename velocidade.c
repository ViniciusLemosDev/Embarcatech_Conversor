#include <stdio.h>
#include "velocidade.h"

double converterVelocidade(double value, int unidadeOrigem, int unidadeDestino) {
    return value * fatoresConversao[unidadeOrigem][unidadeDestino];
}