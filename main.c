#include "libros.h"

int main(void){
    int librosAgregados = 0;
    int cantLibroAgregar;
    int tamanio = 0;
    int buscador;

    agregarLibros(&cantLibroAgregar, &librosAgregados, &tamanio);
    buscarLibros(buscador, &tamanio);
    eliminarLibro(buscador, &tamanio);
    mostrarLibros(&tamanio);
    
    //Hola 
    return 0;
}