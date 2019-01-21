#pragma once

typedef int NumeroPlantas[5];

typedef struct TipoParking{
    int NumeroDePlantas;
    int PlazasMaximas;
    NumeroPlantas Plantas;

    void ConfigurarParking(int numeroDePlanta,int plazasPorPlanta);
    void EntraCoche(int numeroDePlanta);
    void SaleCoche(int numeroDePlanta);
    void ImprimirParking();
};