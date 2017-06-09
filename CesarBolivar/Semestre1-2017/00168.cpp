#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <cassert>

using namespace std;

int main(int argc, char const* argv[])
{
	// string s;
	// for (cin >> s; s != "#"; cin >> s) {
		// s.back() = ';';
		map<char, vector<char>> g = {
			{'A', {'B', 'C', 'D'}},
			{'B', {'A', 'D'}},
			{'D', {'B', 'G'}},
			{'F', {'H'}},
			{'G', {'D', 'E', 'H'}},
			{'E', {'F', 'G', 'H'}},
			{'H', {'E', 'G'}},
			{'C', {'A', 'D'}},
		};
		// cout << s << endl;
		char M, T;
		int k = 0;
		cin >> M >> T >> k;
		for (auto p: g) {
			cout << p.first << ':';
			for (auto q: p.second) {
				cout << q;
			}
			cout << ';';
		}
		map<char, bool> lit;
		vector<char> result;
		int i = k;
		while (true) {
			cout << M << endl;
			if (i == 0) {
				if (!lit[T]) {
					result.push_back(T);
					lit[T] = true;
				}
			}
			bool flag = true;
			for (auto c: g[M]) {
				if (c != T && !lit[c]) {
					flag = false;
					T = M;
					M = c;
					break;
				}
			}
			if (flag) {
				// el minotauro está atrapado
				break;
			}
			assert(k != 0);
			i = (i + 1)%k;
		}
		for (auto r: result) {
			cout << r << ' ';
		}
		cout << '/' << M << endl;
	// }
	return 0;
}
