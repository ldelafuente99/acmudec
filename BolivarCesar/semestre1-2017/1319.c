#include <stdio.h>

int main(int argc, char const* argv[])
{
	int n;
	int count = 1;
	scanf("%d", &n);
	int T[n][n];

	for (int i = n-1; i >= 0; i--) {
		int x = 0;
		int y = i;
		while (x < n && y < n) {
			T[x][y] = count;
			x++;
			y++;
			count++;
		}
	}
	for (int j = 1; j < n; j++) {
		int x = j;
		int y = 0;
		while (x < n && y < n) {
			T[x][y] = count;
			x++;
			y++;
			count++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", T[i][j]);
		}
		printf("\n");
	}
	return 0;
}
