#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) {
  int valorMayor = arr[0];

  for(int i = 1; i < size; i++){
    if (arr[i] > valorMayor)
        valorMayor = arr[i];
  }
  return valorMayor;
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size){
  int arr2[size];
  
  int k = 0;
  
  for (int i = size - 1; i >= 0; i--){
    arr2[i] = arr[k];
    k++;
  }

  for (int j = 0; j < size; j++){
    arr[j] = arr2[j];
  }
}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize){
  int cantPares = 0;
  
  for (int i = 0; i < size; i++){
    if (arr[i] % 2 == 0) cantPares++;
  }
  
  
  //int arrPar[];
  int *arrPar = (int *)malloc(cantPares*sizeof(int));
  if (arrPar == NULL) exit(EXIT_FAILURE);
  
  int aux = 0;
  for (int i = 0; i < size; i++){
    if (arr[i] % 2 == 0){
      arrPar[aux] = arr[i];
      aux++;
    }
  }
  
  *newSize = cantPares;
  return arrPar;
}

/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2,int result[]){
  
  int *result = (int *)malloc((size1 + size2)*sizeof(int));
  if (result == NULL) exit(EXIT_FAILURE);
  
  int i = 0;
  int j = 0;
  int k = 0;
  
  while(k < (size1 + size2)){
    if (i < size1 && j < size2){
      if(arr1[i] > arr2[j]){
        result[k] = arr2[j];
        j++;
      }
      else if(arr1[i] < arr2[j]){
          result[k] = arr1[i];
          i++;
        }
    }
    else{
      if (i == size1){
        result[k] = arr2[j];
        j++;
      }
      else if (j == size2){
        result[k] = arr1[i];
        i++;
      }
    }
    k++;
  }
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size){
  int asc = 0;
  int desc = 0;

  for(int i = 1; i < size; i++){
    if (arr[i - 1] < arr[i]) asc = 1;
    else if (arr[i - 1] > arr[i]) desc = 1;
  }
  if (asc == 1) return 1;
  else if (desc == 1) return -1;
  else return 0;
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
