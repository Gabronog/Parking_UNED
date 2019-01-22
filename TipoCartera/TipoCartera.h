/** 
 * FEBRERO 2017 MODELO A
*/

#pragma once

const int T_GASTO = 100;

typedef enum TipoConcepto{Vivienda,Impuestos,Ropa,Comida,Energia,Agua,Ocio};
//---------------------------0--------1-------2-----3------4------5----6----

typedef struct TipoFecha{
    int dia;
    int mes;
    int anio;
};


typedef struct TipoCIF{
    char letra;
    int numeroCIF; //7 digitos
};

typedef struct TipoGasto{
    TipoCIF CIF;
    TipoConcepto concepto;
    TipoFecha fecha;
    int cantidad;
};

typedef struct MisGastos{
    TipoGasto gastos[T_GASTO];
    int ultimo;

    void NuevoGasto(TipoCIF CIF,TipoConcepto Concepto,TipoFecha fecha,int cantidad);
    void GastosConcepto(TipoConcepto Concepto);
    void GastosporMes(int mes,int anio);
};
