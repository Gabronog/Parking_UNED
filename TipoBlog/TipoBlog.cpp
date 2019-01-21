#include "TipoBlog.h"
#include <stdio.h>

TipoBlog::NuevoHilo(TipoHilo nombreHilo, TipoAutor nombreAutor, TipoTexto texto){
    if(ComprobarHilo(nombreHilo)){
        printf("El hilo \" %s \" ya existe por favor use la opcion Aportar a un hilo, para aportar un mensaje al hilo",nombreHilo);
        return;
    }else{
        if(ultimo != T_MENSAJE-1){
            //Hay espacio para almacenar el mensaje
            AlmacenarMensaje(nombreHilo,nombreAutor,texto);
        }
        else{
            ReemplazarMensaje(nombreHilo, nombreAutor, texto)
        }
    }
}

TipoBlog::AportacionHilo(TipoHilo nombreHilo,TipoAutor nombreAutor, TipoTexto texto){
    if(ComprobarHilo){
        AlmacenarMensaje(nombreHilo,nombreAutor,texto);
    }else{
        printf("Hilo no encontrado.");
    }
}

TipoBlog::AlmacenarMensaje(TipoHilo nombreHilo, TipoAutor nombreAutor, TipoTexto texto){
    strcpy(mensaje[ultimo].texto,texto);
    strcpy(mensaje[ultimo].hilo,nombreHilo);
    strcpy(mensaje[ultimo].autor,nombreAutor);
    ultimo++;
    printf("Almacenado!");
}

TipoBlog::ReemplazarMensaje(TipoHilo nombreHilo, TipoAutor nombreAutor, TipoTexto texto){
    for (int i = 0; i < T_MENSAJE; i++)
    {
        //Copiamos todos los mensajes a una posicion anterior
        strcpy(mensaje[i - 1].autor,mensaje[i].autor);
        strcpy(mensaje[i - 1].hilo, mensaje[i].hilo);
        strcpy(mensaje[i - 1].texto, mensaje[i].texto);
    }
    //Reemplazamos el ultimo mensaje
    strcpy(mensaje[T_MENSAJE - 1].autor, nombreAutor);
    strcpy(mensaje[T_MENSAJE - 1].hilo, nombreHilo);
    strcpy(mensaje[T_MENSAJE - 1].texto, texto);
}

TipoBlog::ComprobarHilo(TipoHilo nombreHilo){
    for (int i = 0; i < ultimo; i++){
        if(strcmp(nombreHilo,mensaje[i].hilo)==0){
            //El hilo existe en nuestros registros
            return true;
        }
    }
    // El hilo no existe en nuestros registros
    return false;
}

TipoBlog::MostrarHilo(TipoHilo hilo){
    for(int i=0; i<=ultimo;i++){
        if(ComprobarHilo(hilo)){
            printf("------------------------------------------------------------------");
            printf("\n\t\tHilo: %s | Autor: %s \n",mensaje[i].hilo,mensaje[i].autor);
            printf("\t\t Mensaje: %s \n",mensaje[i].texto);
        }
    }
    system("pause");
}