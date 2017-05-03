#include <iostream>
#include <string>
#include <map>
#include <tuple>

using namespace std;

void print_expression(map<string, tuple<string, string, string>>& expr, string s) {
	// si no es una variable no estará en el map, por lo tanto es un valor inmediato. Lo imprimimos
	if (expr.find(s) == expr.end()) {
		cout << s;
		return;
	}
	string var1 = get<0>(expr[s]);
	string var2 = get<2>(expr[s]);
	print_expression(expr, get<0>(expr[s])); // imprimimos el desglose de la primera variable
	cout << get<1>(expr[s]);
	if (expr.find(var2) != expr.end()) {
		cout << "(";
		print_expression(expr, get<2>(expr[s])); // imprimimos el desglose de la segunda variable
		cout << ")";
	}
	else {
		print_expression(expr, get<2>(expr[s])); // imprimimos el desglose de la segunda variable
	}
}

int main(int argc, char const *argv[]) {
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		int N;
		map<string, tuple<string, string, string>> expr;
		cin >> N;
		string last;
		for (int j = 0; j < N; j++) {
			string var, equals, var1, op, var2;
			cin >> var;
			cin >> equals;
			cin >> var1;
			cin >> op;
			cin >> var2;
			// cout << var << equals << var1 << op << var2 << endl;
			expr[var] = make_tuple(var1, op, var2);
			last = var;
		}
		// cout << "last: " << last << endl;
		cout << "Expression #" << i << ": ";
		print_expression(expr, last);
		cout << endl;
	}
	return 0;
}
