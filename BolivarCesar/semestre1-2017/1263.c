#include <stdio.h>

int main(int argc, char const *argv[])
{
		int N;
		int M;
		int votos[10000] = {0};
		scanf("%d", &N);
		scanf("%d", &M);
		for (int i = 0; i < M; i++)
		{
			int tmp;
			scanf("%d", &tmp);
			votos[tmp - 1]++;
		}
		for (int i = 0; i < N; i++)
		{
			printf("%.2lf%%\n", 100*votos[i]/(double)M);
		}
	return 0;
}
