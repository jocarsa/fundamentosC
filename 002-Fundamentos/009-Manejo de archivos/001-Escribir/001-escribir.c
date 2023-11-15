#include <stdio.h>

int main(int argc,char *argv[]){
    
    FILE *archivo;
    archivo = fopen("agenda.txt","w");
    fprintf(archivo,"Esto es un texto de prueba \n");
    fclose(archivo);
    return 0;
}