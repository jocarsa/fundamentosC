#include <stdio.h>

int main(int argc,char *argv[]){
    char cadena[100];
    FILE *archivo;
    archivo = fopen("agenda.txt","r");
    while(fgets(cadena,100,archivo)!=NULL){
        puts(cadena);
    }
    fclose(archivo);
    return 0;
}