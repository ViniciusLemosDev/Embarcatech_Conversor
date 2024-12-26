#include "energia.h"
#include "locale.h"
int verificar=0;
double valorenergia = 0 ;
int verificarenergia(int unidadeOrigem, int unidadeDestino)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    if(unidadeDestino>=4 || unidadeOrigem>=4){
        verificar=1;
    }
return verificar;
}
double energia(int unidadeOrigem, int unidadeDestino, double valor ){
    valorenergia = valor*fatoresConversaoenergia[unidadeOrigem][unidadeDestino];
    return valorenergia;
}
    