#include <stdio.h>

int main(int argc, char const *argv[])
{
	int f;
	int cuatro_horas = 240;
	scanf("%d", &f);
	if (45*(12 - f) <= cuatro_horas) {
		puts("YES");
	}
	else {
		puts("NO");
	}
	return 0;
}
