#ifndef TEMPO_H
#define TEMPO_H

// Funções de cálculo
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
// Declaração das funções para cálculos
float segundosParaMinutos(float segundos);
float minutosParaSegundos(float minutos);
float minutosParaHoras(float minutos);
float horasParaMinutos(float horas);

// Função principal para lidar com a lógica de conversão
void executarConversaoTempo();

#endif // TEMPO_H
