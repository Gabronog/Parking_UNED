/** Estructura de datos para el ejercicio
 *  Febrero 2017 Modelo B
 *  Desarrollo **/

const int LECTURASMAX = 10;
typedef enum TipoMedicion{Luz,Agua,Gas};
//                         0    1    2

typedef struct TipoLectura{
    int medicion;   //Asumo que las mediciones son valores enteros, si no usaria float
    bool escrito;
};

typedef struct TipoContador{
    TipoLectura Lecturas[3][LECTURASMAX];
    bool LuzCompleto;
    bool AguaCompleto;
    bool GasCompleto;
    int ultimo;
    
    void NuevaLectura(int TipoMedicion, int medicion);
    void ListarLecturas();
    void Consumos();
}