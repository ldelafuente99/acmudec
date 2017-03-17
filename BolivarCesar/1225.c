#include <stdio.h>

#define MAX 45

// este problema me costó, así que lo voy a comentar
int main(int argc, char const* argv[])
{
	int n;
	// maneras en las que se pueden colorear las franjas, siendo la primera
	// blanca
	long B[MAX + 1]; // B[0] dummy
	scanf("%d", &n);

	// casos base
	B[1] = 1;
	B[2] = 1;
	B[3] = 2;
	B[4] = 3;

	// recurrencia
	for (int i = 5; i <= n; i++) {
		B[i] = B[i-2] + 2*B[i-3] + B[i-4];
		// printf("%ld ", 2*B[i]);

	}
	// basta multiplicar por 2 los casos totales, ya que si se intercambian
	// todas las franjas rojas por blancas y viceversa se siguen satisfaciendo
	// las condiciones del problema y además se cubren los casos faltantes (las
	// combinaciones que comienzan con rojo)
	printf("%ld\n", 2*B[n]);
	return 0;
}
// PORQUÉ MIERDA SIGUE TIRANDO WRONG ANSER??!!
