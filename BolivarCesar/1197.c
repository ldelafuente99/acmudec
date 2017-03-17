#include <stdio.h>

int main(int argc, char const* argv[])
{
	// me dio paja hacer tanto if
	int fuck_it[8][8] = {
		{2, 3, 4, 4, 4, 4, 3, 2},
		{3, 4, 6, 6, 6, 6, 4, 3},
		{4, 6, 8, 8, 8, 8, 6, 4},
		{4, 6, 8, 8, 8, 8, 6, 4},
		{4, 6, 8, 8, 8, 8, 6, 4},
		{4, 6, 8, 8, 8, 8, 6, 4},
		{3, 4, 6, 6, 6, 6, 4, 3},
		{2, 3, 4, 4, 4, 4, 3, 2}
	};
	int n;
	char pos[3]; // +1 por si acaso xd
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", pos);
		int x = pos[0] - 'a';
		int y = pos[1] - '1';
		printf("%d\n", fuck_it[x][y]);
	}
	return 0;
}
