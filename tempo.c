#include "tempo.h"

float segundosParaMinutos(float segundos) {
    return segundos / 60;
}

float minutosParaSegundos(float minutos) {
    return minutos * 60;
}

float minutosParaHoras(float minutos) {
    return minutos / 60;
}

float horasParaMinutos(float horas) {
    return horas * 60;
}

float converterTempo(int unidadeOrigem, int unidadeDestino, float valor) {
    if (unidadeOrigem == unidadeDestino) {
        return valor;
    }

    switch (unidadeOrigem) {
        case 1: // Segundos
            if (unidadeDestino == 2) return segundosParaMinutos(valor);
            break;
        case 2: // Minutos
            if (unidadeDestino == 1) return minutosParaSegundos(valor);
            if (unidadeDestino == 3) return minutosParaHoras(valor);
            break;
        case 3: // Horas
            if (unidadeDestino == 2) return horasParaMinutos(valor);
            break;
    }

    // Caso a combinação não seja válida
    return -1; // Indica erro
}
