#include <stdio.h>

struct Coordenada3D{
    double x;
    double y;
    double z;
};

int main() {
   
    struct Coordenada3D punto1;
    punto1.x = 1;
    punto1.y = 2;
    punto1.z = 3;
    
    printf("Coordenadas del punto:\n");
    printf("Coordenada X: %.2f\n",punto1.x);
    printf("Coordenada Y: %.2f\n",punto1.y);
    printf("Coordenada Z: %.2f\n",punto1.z);

    return 0;
}