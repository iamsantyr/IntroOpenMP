/********
#     Pontificia Universidad Javeriana
#     Materia: Sistemas Operativos
#     Autor: David Santiago Rodriguez Prieto
#     Fichero: Introduccion a OpenMP
#     Descripcion: Programa crea hilos de ejecución para cada core imprime cadena de caracteres por cada llamada.
#********/

#include <omp.h> //Header necesario para invocar PI OpenMP
#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){
	//Imprime los hilos que se usan
	printf("OpenMP ejecutando con %d hilos\n", omp_get_max_threads());

	#pragma omp parallel //La instruccion directa al compilador para paralelismo
	{//Code here will be executed by all threads
		//imprime individualmente los hilos
		printf("Hello World desde el thread %d\n", omp_get_thread_num());
	}
	return 0;
}
