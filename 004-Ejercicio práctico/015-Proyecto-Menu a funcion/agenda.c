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
void insertarRegistro(){
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
}
void leerRegistros(){
    printf("Listamos los registros\n");
    char cadena[100];
    FILE *archivo;
    archivo = fopen("agenda.txt","r");
    while(fgets(cadena,100,archivo)!=NULL){
        puts(cadena);
    }
    fclose(archivo);
    pulsaTeclaContinuar();
}
void imprimeMenu(){
    printf("Ejercicio agenda\n");
    printf("Selecciona una opción:\n");
    printf("1.-Insertar un nuevo registro\n");
    printf("2.-Listar registros\n");
    printf("3.-Salir\n");
    printf("Tu opción: ");
}
void menu(){
    limpiar();
    imprimeMenu();
    char opcion = getchar();
    printf("Has escogido la opción %c \n",opcion);
    switch(opcion){
        case '1':
            insertarRegistro();
            break;
        case '2':
            leerRegistros();
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