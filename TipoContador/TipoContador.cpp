#include <stdio.h>
#include "TipoContador.h"

TipoContador::NuevaLectura(TipoMedicion TipoDeMedicion, int medicion){
    if (ultimo != LECTURASMAX-1){
        for (int i = 0; i < LECTURASMAX; i++)
        {
            if (!Lecturas[TipoDeMedicion][i].escrito)
            {
                Lecturas[TipoDeMedicion][i].escrito == true;
                Lecturas[TipoDeMedicion][i].medicion == medicion;
                Lecturas.ultimo++;
            }
        }
    }
    else{
        for (int i = 1; i <= LECTURASMAX; i++){
            Lecturas[TipoDeMedicion][i - 1] = Lecturas[TipoDeMedicion][i];
        }
        Lecturas[TipoDeMedicion][LECTURASMAX-1].medicion = medicion;
    }
}

TipoContador::ListarLecturas(TipoMedicion TipoDeMedicion){
    for(int i = 0; i<=ultimo;i++){
        printf("Numero de medicion || Medicion  ||");
        printf("       %d          ||     %d    ||",i,Lecturas[TipoDeMedicion][i].medicion);
    }
}

TipoContador::Consumos(TipoMedicion TipoDeMedicion){
    int consumo = 0;
    for (int i = 0; i <= ultimo; i++){
        consumo = consumo + Lecturas[TipoDeMedicion][i];
    }
    printf("El consumo de las ultimas 10 mediciones ha sido %d",consumo);
}
