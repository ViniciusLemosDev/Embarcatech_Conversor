#ifndef VELOCIDADE_H
#define VELOCIDADE_H

const double fatoresConversao[3][3] = {
    {1.0, 0.2777778, 0.621371},  //km -> km - ms - mph
    {3.6, 1.0, 2.23694},         //ms -> km - ms - mph
    {1.60934, 0.44704, 1.0}      //mph -> km - ms - mph
};

double converterVelocidade(double value, int unidadeOrigem, int unidadeDestino);

#endif