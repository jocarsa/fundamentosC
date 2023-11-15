#include <stdio.h>
#include <stdlib.h>

void limpiarWindows(){
    system("cls");
}
void limpiarUnix(){
    printf("\033[2J\033[H");
}
void limpiar(){
    #ifdef _WIN32 
        limpiarWindows(); 
    #else
        limpiarUnix(); 
    #endif
}
void pulsaTeclaContinuar(){
    printf("Pulsa una tecla para continuar...\n");
    getchar();
    while(getchar() != '\n');
}
void menu(){
    limpiar();
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
            char nombre[100];
            printf("Indica el nombre: ");
            scanf(" %99s", nombre);
            char email[100];
            printf("Indica el email: ");
            scanf(" %99s", email);
            char telefono[100];
            printf("Indica el teléfono: ");
            scanf(" %99s", telefono);
            FILE *archivo;
            archivo = fopen("agenda.txt","a");
            fprintf(archivo,"%s,%s,%s\n",nombre,telefono,email);
            fclose(archivo);
            pulsaTeclaContinuar();
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


