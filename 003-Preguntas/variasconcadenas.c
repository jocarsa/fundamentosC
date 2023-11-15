#include <stdio.h>
#include <string.h>

int main(){
    char nombre[] = "Juan";
    strcpy(nombre,"Jorge");
    int edad=26;
    float peso= 78.34;

    printf("Mi nombre es %s mi edad es %i  y mi peso es %f", nombre, edad, peso); 
    return 0;
}