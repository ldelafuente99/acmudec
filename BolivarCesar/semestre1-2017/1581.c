#include <stdio.h>

int main(int argc, char const* argv[])
{
	int n;
	scanf("%d", &n);
	int numero = 0;
	int repeticiones = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);

		if (tmp != numero) {
			if (numero != 0) {
				printf("%d %d ", repeticiones, numero);
			}
			numero = tmp;
			repeticiones = 1;
		}
		else {
			repeticiones++;
		}
	}
	printf("%d %d ", repeticiones, numero);
	return 0;
}
