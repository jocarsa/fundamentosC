#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("Ejercicio agenda\n");
    printf("Selecciona una opción:\n");
    printf("1.-Insertar un nuevo registro\n");
    printf("2.-Listar registros\n");
    printf("3.-Salir\n");
    printf("Tu opción: ");
    char opcion = getchar();
    printf("Has escogido la opción %c \n",opcion);
    switch(opcion){
        case '1':
            printf("Insertamos un registro\n");
            break;
        case '2':
            printf("Listamos los registros\n");
            break;
        case '3':
            printf("Salimos del programa\n");
            exit(0);
            break;
    }
    menu();
}

int main() {
   
    menu();
    return 0;
}