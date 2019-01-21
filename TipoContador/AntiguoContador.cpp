.h

    /**TipoLectura LecturaLuz[LECTURASMAX];
    TipoLectura LecturaAgua[LECTURASMAX];
    TipoLectura LecturaGas[LECTURASMAX];**/

.cpp
    /** ANTES DE METERLO TODO EN UN MISMO VECTOR
     * 
     * switch(TipoMedicion){
       case Luz:
               //El tipo de medicion es de Luz
               if(!LuzCompleto){
                   for(int i = 0; i<LECTURASMAX;i++){
                       if(!LecturaLuz[i].escrito){
                           LecturaLuz[i].escrito == true;
                           LecturaLuz[i].medicion == medicion;
                           if(i == LECTURASMAX){
                               LuzCompleto == true;
                           }
                           return;
                       }
                   }
               }
               else{
                   for(int i = 1; i<=LECTURASMAX;i++){
                       LecturaLuz[i-1] = LecturaLuz[i];
                   }
                       LecturaLuz[LECTURASMAX].medicion = medicion; 
               }
               break;
       case Agua:
               //El tipo de medicion es de Luz
               if (!AguaCompleto){
                   for (int i = 0; i < LECTURASMAX; i++)
                   {
                       if (!LecturaAgua[i].escrito)
                       {
                           LecturaAgua[i].escrito == true;
                           LecturaAgua[i].medicion == medicion;
                           if (i == LECTURASMAX)
                           {
                               AguaCompleto == true;
                           }
                           return;
                       }
                   }
               }
               else{
                   for (int i = 1; i <= LECTURASMAX; i++){
                       LecturaAgua[i - 1] = LecturaAgua[i];
                   }
                   LecturaAgua[LECTURASMAX].medicion = medicion;
               }
               break;
       case Gas:
           //El tipo de medicion es de Gas
           if (!GasCompleto){
               for (int i = 0; i < LECTURASMAX; i++){
                   if (!LecturaGas[i].escrito){
                       LecturaGas[i].escrito == true;
                       LecturaGas[i].medicion == medicion;
                       if (i == LECTURASMAX){
                           GasCompleto == true;
                       }
                       return;
                   }
               }
           }
           //Gas esta completo
           else{
               for (int i = 1; i <= LECTURASMAX; i++){
                   LecturaGas[i - 1] = LecturaGas[i]; //Paso cada medicion 1 hacia atras empezando desde la 1
               }
               LecturaGas[LECTURASMAX].medicion = medicion; //Sobreescribo la 10
           }
           break;
}**/