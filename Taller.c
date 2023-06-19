#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define cantidad_alumnos 2
#define max 20

struct alumno_structure
{
    char nombre[20];
    int edad;
    char direccion[20];
    char carrera[20];
    float promedio;

} alumno = {"Ariel",18,"Gasca","software",10.00};


int main ()
{
    struct alumno_structure alumno[cantidad_alumnos] = {};

    for (int i = 0; i < cantidad_alumnos; i++)
    {
        printf("ALUMNO N# %d\n", i+1);
        
        fflush(stdin);
        puts("Ingrese su nombre: ");
        gets(alumno[i].nombre);
        
        fflush(stdin);
        puts("Ingrese su direccion: ");
        gets(alumno[i].direccion);

        fflush(stdin);
        puts("Ingrese su carrera: ");
        gets(alumno[i].carrera);

        puts("Ingrese su edad: ");
        scanf("%d", &alumno[i].edad);

        puts("Ingrese su promedio");
        scanf("%f", &alumno[i].promedio);
    }

    system("cls");

    for (int i = 0; i < cantidad_alumnos; i++)
    {
        printf("ALUMNO N# %d\n", i+1);

        printf("NOMBRE: %s\n",alumno[i].nombre);
        printf("DIRECCION: %s\n",alumno[i].direccion);
        printf("CARRERA: %s\n",alumno[i].carrera);
        
        printf("Edad: %d\n", alumno[i].edad);
        printf("Promedio: %.2f\n", alumno[i].promedio);

        puts(" ");
    }



    return 0;
}   

