#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	cin >> n;
	for ( ; n != 0; cin >> n) {
		multiset<int> ms;
		int cost = 0;
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			for (int j = 0; j < k; j++) {
				int x;
				cin >> x;
				ms.insert(x);
				// for (auto vv : ms) {
				// 	cout << " " << vv;
				// }
				// cout << endl;
			}
			int minimum = *(ms.begin());
			int maximum = *(ms.rbegin());
			cost += maximum - minimum;
			// cout << "cost " << cost << endl;
			// ms.erase(minimum);
			ms.erase(ms.begin()); // debo pasarle el iterador y no la clave, de lo contrario me borra todos los elementos con la misma clave
			// for (auto vv : ms) {
			// 	cout << " " << vv;
			// }
			// cout << endl;
			// ms.erase(maximum);
			// ms.erase(ms.rbegin()); // C++ de mierda no me deja hacer lo mismo que hice arriba porque esta wea es un iterador reverso, asi que debo hacer la estupidez de aca abajo
			ms.erase(ms.find(maximum));
			// for (auto vv : ms) {
			// 	cout << " " << vv;
			// }
			// cout << endl;
		}
		// for (auto vv : ms) {
		// 	cout << " " << vv;
		// }
		// cout << endl;
		cout << cost << endl;
	}
	return 0;
}
