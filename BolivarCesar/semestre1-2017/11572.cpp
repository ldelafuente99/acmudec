#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
	int t;
	cin >> t;
	// cout << "t: " << t << endl;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		// cout << "n: " << n << endl;
		int result = 0;
		set<int> s;
		vector<int> v;
		for (int j = 0; j < n; j++) {
			int k;
			cin >> k;
			// cout << "k: " << k << endl;
			v.push_back(k);
		}
		for (int j = 0; j < n; j++) {
			// cout << "j arriba: " << j << endl;
			int k = v[j];
			if (s.find(k) == s.end()) {
				// cout << "insertando " << k << "..." << endl;
				s.insert(k);
				result = max(result, int(s.size()));
			}
			else {
				result = max(result, int(s.size()));
				s.clear();
				s.insert(k);

				// // TODO: encontrar el indice del k anterior + 1
				// int l = k - 1;
				// while (l >= 0 && v[l] != k) {
				// 	l--;
				// }
				// cout << "indice: " << l + 1 << endl;
				// j = l + 1;
				// cout << "j abajo: " << j << endl;
				// // j = l + 1;
			}
		}
		cout << result << endl;
	}
	return 0;
}
