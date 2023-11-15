#include <stdio.h>

int main() {
   
    printf("Ejercicio agenda\n");
    printf("Selecciona una opción:\n");
    printf("1.-Insertar un nuevo registro\n");
    printf("2.-Listar registros\n");
    printf("Tu opción: ");
    char opcion = getchar();
    printf("Has escogido la opción %c \n",opcion);
    return 0;
}