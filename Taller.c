#include <stdio.h>

#define cantidad_alumnos 5
#define max 20

struct alumno_structure
{
    char nombre[20];
    int edad[cantidad_alumnos];
    char direccion[20];
    char carrera[20];
    float promedio[cantidad_alumnos];

} alumno = {"Ariel",18,"Gasca","software",10.00};


int main ()
{
    struct alumno_structure alumno[cantidad_alumnos] = {};

    for (int i = 0; i < cantidad_alumnos; i++)
    {
        printf("ALUMNO N# %d\n", i+1);
        
        fflush(stdin);
        puts("Ingrese su nombre: ");
        gets(alumno.nombre);
        
        fflush(stdin);
        puts("Ingrese su direccion: ");
        gets(alumno.direccion);

        fflush(stdin);
        puts("Ingrese su carrera: ");
        gets(alumno.carrera);

        puts("Ingrese su edad: ");
        scanf("%d", &alumno.edad[i]);

        puts("Ingrese su promedio");
        scanf("%f", &alumno.promedio[i]);
    }

    for (int i = 0; i < cantidad_alumnos; i++)
    {
        printf("ALUMNO N# %d\n", i+1);

        puts(alumno.nombre);
        puts(alumno.direccion);
        puts(alumno.carrera);
        
        printf("Edad: %d\n", alumno.edad[i]);
        printf("Promedio: %f\n", alumno.promedio[i]);
        
    }



    return 0;
}   
