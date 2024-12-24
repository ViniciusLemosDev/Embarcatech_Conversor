#ifndef MEMORIA_H
#define MEMORIA_H

#include <stdio.h>

//1.Bits 2.Bytes 3.KB 4.MB 5.GB 6.TB
static double memoria(int origem, int destino, double valor) {
    double resultado = 0.0;

    switch (origem)
    {
    case 1:
        if(destino == 2){
            resultado = valor / 8;
        }
        else if(destino == 3){
            resultado = (valor / 8)/1024;
        }
        else if(destino == 4){
            resultado = ((valor / 8)/1024)/1024;
        }
        else if(destino == 5){
            resultado = (((valor / 8)/1024)/1024)/1024;
        }
        else if(destino == 6){
            resultado = ((((valor / 8)/1024)/1024)/1024)/1024;
        }
        break;
    
    case 2:
        if(destino == 1){
            resultado = valor * 8;
        }
        else if(destino == 3){
            resultado = valor / 1024;
        }
        else if(destino == 4){
            resultado = (valor / 1024) / 1024;
        }
        else if(destino == 5){
            resultado = ((valor / 1024)/1024) / 1024;
        }
        else if(destino == 6){
            resultado = (((valor / 1024)/1024)/1024) / 1024;
        }
        break;

    case 3:
        if(destino == 1){
            resultado = (valor * 1024) * 8;
        }
        else if(destino == 2){
            resultado = valor * 1024;
        }
        else if(destino == 4){
            resultado = valor / 1024;
        }
        else if(destino == 5){
            resultado = (valor / 1024)/1024;
        }
        else if(destino == 6){
            resultado = ((valor / 1024)/1024) / 1024;
        }
        break;

    case 4:
        if(destino == 1){
            resultado = ((valor * 1024) * 1024) * 8;
        }
        else if(destino == 2){
            resultado = (valor * 1024) * 1024;
        }
        else if(destino == 3){
            resultado = valor * 1024;
        }
        else if(destino == 5){
            resultado = valor / 1024;
        }
        else if(destino == 6){
            resultado = (valor / 1024) / 1024;
        }
        break;

    case 5:
        if(destino == 1){
            resultado = (((valor * 1024) * 1024) * 1024) * 8;
        }
        else if(destino == 2){
            resultado = ((valor * 1024) * 1024) * 1024;
        }
        else if(destino == 3){
            resultado = (valor * 1024) * 1024;
        }
        else if(destino == 4){
            resultado = valor * 1024;
        }
        else if(destino == 6){
            resultado = valor / 1024;
        }
        break;

    case 6:
        if(destino == 1){
            resultado = ((((valor * 1024) * 1024) * 1024) * 1024) * 8;
        }
        else if(destino == 2){
            resultado = (((valor * 1024) * 1024) * 1024) * 1024;
        }
        else if(destino == 3){
            resultado = ((valor * 1024) * 1024) * 1024;
        }
        else if(destino == 4){
            resultado = (valor * 1024) * 1024;
        }
        else if(destino == 5){
            resultado = valor * 1024;
        }
        break;
    
    default:
        printf("Conversão inválida!\n");
        return -1;
    }
    
    return resultado;
}

#endif