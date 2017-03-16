#include <stdio.h>
#include <math.h>

// porque no quiere aceptarlo??!!

int main(int argc, char const *argv[])
{
	unsigned long long A[256*1024];
	int i = 0;
	while (scanf("%ld", &A[i]) != EOF) {
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%.4lf\n", sqrt((double) A[j]));
	}
	return 0;
}
