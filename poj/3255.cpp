#include <iostream>
#include <vector>
#include <queue>

using namespace std;
/* POJ doesn't support using X = Y */
typedef struct {
	int from, to, cost;
} edge;
typedef pair<int, int> pii;

#define MAX_N	5000
#define INF	(1<<31 - 1)

int N, R;
vector<edge> G[MAX_N];
vector<int> dist(MAX_N);
vector<int> dist2(MAX_N);

int dijkstra2(void)
{
	/* Intentional space */
	priority_queue<pii, vector<pii>, greater<pii> > que;
	fill(dist.begin(), dist.begin() + N, INF);
	fill(dist2.begin(), dist2.begin() + N, INF);
	dist[0] = 0;
	que.push({0, 0});

	while (!que.empty()) {
		pii p = que.top(); que.pop();
		int v = p.second;
		int d = p.first;

		if (dist2[v] < d) continue;
		for (int i = 0; i < G[v].size(); i++) {
			edge e = G[v][i];
			int d2 = d + e.cost;
			if (dist[e.to] > d2) {
				swap(dist[e.to], d2);
				que.push({dist[e.to], e.to});
			}

			/* Swap happened */
			if (dist2[e.to] > d2 && dist[e.to] < d2) {
				dist2[e.to] = d2;
				que.push({dist2[e.to], e.to});
			}
		}
	}

	return dist2[N - 1];
}

int main(void)
{
	cin >> N >> R;
	for (int i = 0; i < R; i++) {
		int to, from, cost;
		cin >> to >> from >> cost;
		to--; from--;
		G[to].push_back({to, from, cost});
		G[from].push_back({from, to, cost});
	}

	cout << dijkstra2() << endl;
}
