#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, k;
	int faltantes = 0;
	int sobrantes = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		tmp = tmp - k;
		if (tmp >= 0) {
			sobrantes += tmp;
		}
		else {
			faltantes -= tmp;
		}
	}
	printf("%d %d\n", sobrantes, faltantes);
	return 0;
}
