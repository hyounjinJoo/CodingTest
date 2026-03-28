#include <iostream>
#include <vector>
using namespace std;

vector<int> Adj[1001];
bool Visited[1001];
int N{}, M{};

void DFS(int Curr)
{
	Visited[Curr] = true;

	for (int Next : Adj[Curr])
	{
		if (!Visited[Next])
		{
			DFS(Next);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		int U{}, V{};
		cin >> U >> V;
		Adj[U].push_back(V);
		Adj[V].push_back(U);
	}

	int Answer{};

	for (int i = 1; i <= N; ++i)
	{
		if (!Visited[i])
		{
			DFS(i);
			Answer++;
		}
	}

	cout << Answer << '\n';

	return 0;
}