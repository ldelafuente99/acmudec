#include <stdio.h>

int main(int argc, char const* argv[])
{
	int n;
	scanf("%d", &n);
	if (n < 5) {
		puts("few");
	}
	else if (n < 10) {
		puts("several");

	}
	else if (n < 20) {
		puts("pack");

	}
	else if (n < 50) {
		puts("lots");

	}
	else if (n < 100) {
		puts("horde");

	}
	else if (n < 250) {
		puts("throng");

	}
	else if (n < 500) {
		puts("swarm");

	}
	else if (n < 1000) {
		puts("zounds");

	}
	else {
		puts("legion");

	}
	return 0;
}
