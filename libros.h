#ifndef LIBROS_H_INCLUDED
#define LIBROS_h_INCLUDED
#include<stdio.h>
#include<stdlib.h>

struct libros
{
    char nombre[30];
    int codigo;
}libro[10];

void agregarLibros(int *cantAgregar, int *librosAgregados, int *aux){

    int i;
    printf("Cantidad de libros que desea agregar: ");
    scanf("%d", &*cantAgregar);
    for (i = *librosAgregados; i < *cantAgregar + *librosAgregados; i++)
    {
        printf("Ingrese el nombre del libro %i: ", i + 1);
        scanf("%s", libro[i].nombre);
        printf("Ingrese el codigo del libro %i: ", i + 1);
        scanf("%d", &libro[i].codigo);
    }
    *librosAgregados = i; 
    *aux += *cantAgregar;
}

void mostrarLibros(int *tamanio){

    for (size_t i = 0; i < *tamanio; i++)
    {
        printf("libro %i: %s. Codigo: %d \n", i + 1, libro[i].nombre, libro[i].codigo);
    } 

}

void buscarLibros(int buscador, int *tamanio){

    printf("Ingrese el codigo del libro: ");
    scanf("%d", &buscador);

    for (size_t i = 0; i < *tamanio; i++)
    {
        if(buscador == libro[i].codigo){

            printf("libro %i: %s. Codigo: %d \n", i + 1, libro[i].nombre, libro[i].codigo);
            break;
        }
    }
}

void eliminarLibro(int buscador, int *tamanio){

    printf("introduzca el codigo para eliminar libro: ");
    scanf("%d", &buscador);
    for (size_t i = 0; i < *tamanio; i++)
    {
        if(buscador == libro[i].codigo){

            libro[i].codigo = 0;
            for (size_t j = 0; j < 10; j++)
            {
                *libro[i].nombre =  '\0';
            }
            break;
        }
    }

}

#endif