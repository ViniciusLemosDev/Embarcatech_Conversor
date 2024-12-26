#ifndef TEMPO_H
#define TEMPO_H

// Implementação das funções auxiliares
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
// Declaração das funções
void executarConversao();

#endif