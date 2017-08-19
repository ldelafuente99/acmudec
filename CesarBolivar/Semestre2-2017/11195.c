#include <stdio.h>
#include <stdlib.h>

int invalid[15][15];

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
	return;
}

int valid(int v[], int k) {
	if (invalid[k][v[k]]) {
		// printf("invalid for k = %d\n", k);
		return 0;
	}
	for (int i = 0; i < k; i++) {
		if (abs(i - k) == abs(v[i] - v[k])) {
			// for (int j = 0; j <= k; j++) {
			// 	printf("%d", v[j]);
			// }
			// printf(" failed for i = %d and k = %d\n", i, k);
			return 0;
		}
		// if (invalid[i][v[i]]) {
		// 	for (int j = 0; j <= k; j++) {
		// 		printf("%d", v[j]);
		// 	}
		// 	printf(" invalid for i = %d and v[i] = %d\n", i, v[i]);
		// 	return 0;
		// }
	}
	return 1;
}

int perm(int v[], int k, int n) {
	if (k == n) {
		// no es necesario revisar aca de nuevo, ya que solo se llama a la funcion cuando es una permutacion valida
		// return valid(v, k-1);
		// for (int j = 0; j < n; j++) {
		// 	printf("%d", v[j]);
		// }
		// printf(" VALID\n");
		return 1;
	}
	int count = 0;
	for (int i = k; i < n; i++) {
		swap(&v[k], &v[i]);
		if (valid(v, k)) {
			count += perm(v, k + 1, n);
		}
		swap(&v[k], &v[i]);
	}
	return count;
}

void iota(int v[], int first, int last, int value) {
	for (int i = first; i < last; i++) {
		v[i] = value;
		value++;
	}
}

void clear() {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			invalid[i][j] = 0;
		}
	}
}


int main(int argc, char const* argv[])
{
	int n = 0;
	int count = 1;
	scanf("%d", &n);
	while (n != 0) {
		int v[n];
		iota(v, 0, n, 0);
		for (int i = 0; i < n; i++) {
			char row[n + 1];
			scanf("%s", row);
			for (int j = 0; j < n; j++) {
				if (row[j] == '*') {
					invalid[i][j] = 1;
					// printf("INVALIDATING %d %d\n", i, j);
				}
			}
		}
		int result = perm(v, 0, n);
		printf("Case %d: %d\n", count, result);
		scanf("%d", &n);
		count++;
		clear();
	}
	// invalid[0][4] = 1;
	// invalid[1][2] = 1;
	// invalid[2][0] = 1;
	// invalid[2][2] = 1;
	// invalid[3][3] = 1;
	// invalid[4][4] = 1;
	// int arr[] = {2, 0, 3, 1, 4};
	// for (int i = 0; i < 5; i++) {
	// 	valid(arr, i);
	// }
	return 0;
}
