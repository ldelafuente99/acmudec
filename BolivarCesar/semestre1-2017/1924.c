#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	if ((n*(n+1)/2) % 2 == 0) {
		puts("black");
	}
	else {
		puts("grimy");

	}
	return 0;
}
