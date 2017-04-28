#include <stdio.h>
#include <string.h>

char formula[252];
int value[26] = {0};
char variable[27] = {'\0'};
int operand[250] = {0};
int early_finish = 0;
char* result[] = {"NO", "YES"};

int is_operand(char c)
{
	return 'a' <= c && c <= 'z';
}

// esta wea determina si la formula en notacion polaca inversa da true
int is_satisfiable()
{
	int read = 0;
	for (int i = 0; i < strlen(formula); i++) {
		if (is_operand(formula[i])) {
			operand[read] = value[formula[i] - 'a'];
			read++;
		}
		else if (formula[i] == '~') {
			operand[read - 1] = !operand[read - 1];
		}
		else if (formula[i] == '&') {
			operand[read-2] = operand[read-2] && operand[read-1];
			read--;
		}
		else if (formula[i] == '|') {
			operand[read-2] = operand[read-2] || operand[read-1];
			read--;
		}
	}
	return operand[0];
}


// esta wea explora todas las combinaciones de valores de verdad
int backtrack(char variable[], int k, int vars) {
	if (early_finish) {
		return early_finish;
	}
	if (k == vars) {
		// printf("backtrack:");
		// for (size_t i = 0; i < vars; i++) {
		// 	printf("%d", value[variable[i] - 'a']);
		// }
		early_finish = is_satisfiable();
		// printf("\n%d\n", early_finish);
		return early_finish;
	}
	value[variable[k] - 'a'] = 0;
	int zero = backtrack(variable, k+1, vars);
	value[variable[k] - 'a'] = 1;
	int one = backtrack(variable, k+1, vars);
	return zero || one;
}

int in(char str[], int len, char c) {
	for (size_t i = 0; i < len; i++) {
		if (str[i] == c) {
			return 1;
		}
	}
	return 0;
}

int main(int argc, char const* argv[])
{
	int cases = 0;
	int vars = 0;
	scanf("%d", &cases);
	for (int i = 0; i < cases; i++) {
		scanf("%s", formula);
		int k = 0;
		for (int j = 0; j < strlen(formula); j++) {
			if (is_operand(formula[j]) && !in(variable, k, formula[j])) {
				variable[k] = formula[j];
				// printf("asads: %c\n", variable[k]);
				k++;
			}
		}
		variable[k] = '\0';
		// puts(variable);
		early_finish = 0;
		int bt = backtrack(variable, 0, strlen(variable));
		puts(result[bt]);
	}
	return 0;
}
