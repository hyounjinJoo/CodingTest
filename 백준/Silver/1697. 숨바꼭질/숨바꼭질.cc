#include <queue>
#include <iostream>
using namespace std;
int dist[100002];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// input
	int Subin, Sister;
	cin >> Subin >> Sister;
	fill(dist, dist + 100001, -1);
	dist[Subin] = 0;
	queue<int> Q;
	Q.push(Subin);

	while (dist[Sister] == -1)
	{
		int Cur = Q.front(); Q.pop();
		for (int Next : {Cur - 1, Cur + 1, Cur * 2})
		{
			if (Next < 0 || Next > 100000) continue;
			if (dist[Next] != -1) continue;
			dist[Next] = dist[Cur] + 1;
			Q.push(Next);
		}
	}

	cout << dist[Sister];

	return 0;
}
