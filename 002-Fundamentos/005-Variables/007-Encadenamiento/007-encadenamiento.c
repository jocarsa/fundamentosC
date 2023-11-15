#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    
    char nombre[] = "Jose Vicente ";
    char apellidos[] = "Carratala Sanchis";
    
    strcat(nombre,apellidos);
    printf("Mi nombre completo es: %s",nombre);
    
    return 0;
}