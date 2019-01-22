#include "TipoCartera.h"
#include <stdio.h>

MisGastos::NuevoGasto(TipoCIF CIF, TipoConcepto Concepto, TipoFecha fecha, int cantidad){
    if (ultimo < T_GASTO-1){
        gastos[ultimo].CIF.letra = CIF.letra;
        gastos[ultimo].CIF.numeroCIF = CIF.numeroCIF;
        gastos[ultimo].concepto = Concepto;
        gastos[ultimo].fecha.dia = fecha.dia;
        gastos[ultimo].fecha.mes = fecha.mes;
        gastos[ultimo].fecha.anio = fecha.anio;
        ultimo++
    }
    else{
        printf("Lo siento se ha llegado al limite de gastos que se pueden almacenar");
    }
}

MisGastos::GastosConcepto(TipoConcepto Concepto){
    printf("Los gastos en el concepto elegido han sido:\n");
    printf("Cantidad |   Fecha   | CIF\n");
    for(int i = 0; i<=ultimo;i++){
        if(Concepto == gastos[i].concepto){
            printf("    %d   |  %d/%d/%d | %c%d\n", gastos[i].cantidad, gastos[i].fecha.dia, gastos[i].fecha.mes, gastos[i].fecha.anio, gastos[i].CIF.letra,gastos[i].CIF.numeroCIF);
        }
    }
}

MisGastos::GastosporMes(int mes, int anio){
    printf("Los gastos en el periodo elegido han sido:\n");
    printf("Cantidad |   Dia   | CIF\n");
    for (int i = 0; i <= ultimo; i++){
        if(gastos[i].fecha.mes == mes && gastos[i].fecha.anio == anio){
            printf("    %d   |  %d | %c%d\n", gastos[i].cantidad, gastos[i].fecha.dia, gastos[i].CIF.letra, gastos[i].CIF.numeroCIF);
        }
    }
}