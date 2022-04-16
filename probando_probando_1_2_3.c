#include <stdio.h>

int main ()
{
    char nom [15];
    char ape [15];
    int edad;

    printf("Ingrese su nombre: ");
    scanf("%s", nom);
    printf("Ingrese su apellido: ");
    scanf("%s", ape);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);


    printf ("\n\n+ Disculpa, te importa... el tren esta lleno \n- Adelante \n+ Yo me llamo Ron, Ron Weasly \n");
    printf ("- Soy %s, %s %s\n", nom, nom, ape);

    printf("Mi edad es: %d \n", edad);
    return 0;
}