#include <stdio.h>

int main(int argc, char const* argv[])
{
	int n;
	int secciones[3];
	int suma_mayor = 0;
	int medio = 2;
	scanf("%d", &n);
	scanf("%d %d %d", &secciones[0], &secciones[1], &secciones[2]);
	suma_mayor = secciones[0] + secciones[1] + secciones[2];

	for (int i = 3; i < n; i++) {
		int suma;
		secciones[0] = secciones[1];
		secciones[1] = secciones[2];
		scanf("%d", &secciones[2]);
		suma = secciones[0] + secciones[1] + secciones[2];
		if (suma > suma_mayor) {
			suma_mayor = suma;
			medio = i;
		}
	}
	printf("%d %d\n", suma_mayor, medio);
	return 0;
}
