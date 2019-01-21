#include <stdio.h>
#include "TipoParking.h"

// Suponemos que la comprobacion de numeroTotalDePlantas<5 se hace en el main()
void TipoParking::ConfigurarParking(int numeroTotalDePlantas,int plazasMaxPorParking){

    NumeroDePlantas = numeroTotalDePlantas;
    PlazasMaximas = plazasMaxPorParking;

    /** Inicializo a 0 las plantas pues no hay plazas ocupadas **/
    for(int i=0;i<NumeroPlantas;i++){
        Plantas[i] = 0; //Las plazas estan vacias
    }    
}

/** Tanto para la salida como para la entrada de vehiculos
 *  Suponemos que la comprobacion de que la planta 
 * existe dentro del parking se hace en el main()
 *  **/

void TipoParking::EntraCoche(int numeroDePlanta){
    if(Plazas[numeroDePlanta] == PlazasMaximas){
        printf("Error => La planta esta llena");
    }
    else{
        Plantas[numeroDePlanta]++;
    }
}

void TipoParking::SalidaCoche(int numeroDePlanta){
    if (Plantas[numeroDePlanta] == 0){
        printf("Error => La planta esta vacia");
    }
    else{
        Plantas[numeroDePlanta]--;
    }
}

void TipoParking::ImprimirParking(int numeroDePlanta){
//Otra vez asumimos que el control de que la planta existe dentro del parking se hace en el main()
    int TotalLibres = 0;
    int LibresEnLaPlanta;
    for(int i=0;i<NumeroDePlantas;i++){
        LibresEnLaPlanta = PlazasMaximas - Plantas[i];
        printf("El numero de plantas libres en la planta %d es %d",i,LibresEnLaPlanta);
        TotalLibres = TotalLibres + LibresEnLaPlanta;
    }
    printf("El numero total de plantas libres es de %d",TotalLibres);
}