#pragma once

const int T_MENSAJE = 100;
const int T_HILO = 6;
const int T_AUTOR = 11;
const int T_TEXTO = 51;

typedef char TipoHilo[T_HILO];
typedef char TipoAutor[T_AUTOR];
typedef char TipoTexto[T_TEXTO];

typedef struct TipoMensaje{
    TipoHilo hilo;
    TipoAutor autor;
    TipoTexto texto;
};

typedef struct TipoBlog{
    void NuevoHilo(TipoHilo nombreHilo, TipoAutor nombreAutor, TipoTexto texto);
    void AportacionHilo(TipoHilo nombreHilo, TipoAutor nombreAutor, TipoTexto texto);
    void MostrarHilo(TipoHilo hilo);
    bool ComprobarHilo(TipoHilo nombreHilo);
    void AlmacenarMensaje(TipoHilo nombreHilo, TipoAutor nombreAutor, TipoTexto texto);
    void ReemplazarMensaje(TipoHilo nombreHilo, TipoAutor nombreAutor, TipoTexto texto);
    
    private: 
        TipoMensaje mensaje[T_MENSAJE];
        int ultimo;
};