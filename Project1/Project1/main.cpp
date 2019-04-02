#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "burbuja.h"
using namespace std;
const int tam = 10;
int main()
{
	srand(time(NULL));
	ascendente ascendente;
	descendente descendente;
	burbuja *a;
	int lista[tam];
	int *indice;
	for (indice = lista; indice < lista + tam; indice++) {
		*indice = rand() % 10000;
		cout << *indice <<" ";
	}
	cout << endl << endl;
	indice = lista;
	int *fin;
	fin = lista + tam - 1;

	a = &ascendente;
	a->ordenar(indice, fin);

	for (indice = lista; indice < lista + tam; indice++)
		cout << *indice << " ";
	cout << endl;

	indice = lista;
	fin = lista + tam - 1;
	a = &descendente;
	a->ordenar(indice,fin);

	for (indice = lista; indice < lista + tam; indice++)
		cout << *indice << " ";
	cout << endl;

	return 0;
}