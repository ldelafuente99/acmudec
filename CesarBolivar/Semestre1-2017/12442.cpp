#include <iostream>
#include <vector>
#include <set>

using namespace std;

// typedef vector<vector<int>> graph;
typedef vector<set<int>> graph;

void dfs(graph& g, vector<bool>& visited, int k) {
	if (visited[k]) {
		return;
	}
	for (auto n: g[k]) {
		dfs(g, visited, n);
	}
}

void Dfs() {

}

int main(int argc, char const* argv[])
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		// graph g(N + 1);
		// int g[N + 1];
		vector<set<int>> g(N + 1);
		for (int j = 0; j < N; j++) {
			int u, v;
			cin >> u >> v;
			// g[u] = v;
			g[u].insert(v);
			// g[u].push_back(v);
		}
		for (int z = 1; z <= N; z++) {
			for (int x = 1; x <= N; x++) {
				for (int y = 1; y <= N; y++) {
					if (g[x].find(z) != g[x].end() && g[z].find(y) != g[z].end()) {
						g[x].insert(y);
					}
				}
			}
		}
		int m = 0;
		int k = 0;
		for (int j = 1; j <= N; j++) {
			if (g[j].size() > m) {
				k = j;
				m = g[j].size();
			}
		}
		cout << "Case " << i + 1 << ": " << k << endl;
	}
	return 0;
}
