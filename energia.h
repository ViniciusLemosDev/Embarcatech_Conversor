#ifndef ENERGIA_H
#define ENERGIA_H
    int verificarenegia(int UnidadeOrigem,int UnidadeDestino);
    double energia(int unidadeOrigem, int unidadeDestino, double valor);

    const double fatoresConversao[3][3] = {
    {1.0, 0.001, 0.00135962},   // W -> W - kW - cv
    {1000.0, 1.0, 1.35962},     // kW -> W - kW - cv
    {735.49875, 0.73549875, 1.0} // cv -> W - kW - cv
    };





#endif