#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	if (n > 0) {
		printf("%d\n", n*(n + 1)/2);
	}
	else if (n == 0) {
		printf("%d\n", 1);
	}
	else {
		// la formula usual para sumar hasta n, adaptada a los negativos.
		// (+1) para considerar que se cuenta desde 1 hacia atrás
		printf("%d\n", -n*(n - 1)/2 + 1);
	}
	return 0;
}
