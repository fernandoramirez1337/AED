#include "burbuja.h"
burbuja::burbuja() {}

void burbuja::ordenar(int* inicio, int* fin)
{
	bool cambio = true;
	while (cambio)
	{
		cambio = false;
		for (int* ptr = inicio; ptr < fin; ++ptr)
		{
			if (op(ptr, (ptr + 1)))
				cambio = true;
		}

	}
}
bool burbuja::cambiar(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
	return true;
}
bool descendente::op(int* a, int* b)
{
	return (*a < *b) ? cambiar(a, b) : false;
}
bool ascendente::op(int *a, int *b)
{
	return (*a > *b) ? cambiar(a, b) : false;
}