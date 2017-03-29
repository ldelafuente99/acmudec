#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m, n;
	char* output[] = {"[:=[first]", "[second]=:]"};
	scanf("%d %d", &m, &n);
	int cortes = m*n - 1; // (n - 1) + n*(m - 1)
	printf("%s\n", output[!(cortes%2)]); // "elegante"
	return 0;
}
