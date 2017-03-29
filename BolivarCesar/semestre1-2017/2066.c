#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	int min = 1000001;
	int res[9];
	scanf("%d %d %d", &a, &b, &c);
	res[0] = a + b + c;
	res[1] = a + b - c;
	res[2] = a + b * c;
	res[3] = a - b + c;
	res[4] = a - b - c;
	res[5] = a - b * c;
	res[6] = a * b + c;
	res[7] = a * b - c;
	res[8] = a * b * c;
	for (int i = 0; i < 9; i++)
	{
		if (res[i] < min) {
			min = res[i];
		}
	}
	printf("%d\n", min);
	return 0;
}
