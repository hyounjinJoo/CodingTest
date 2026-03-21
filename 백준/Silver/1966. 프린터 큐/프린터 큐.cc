#include <iostream>
#include <deque>
#include <utility>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int CaseCount{};
	cin >> CaseCount;

	int N{}, M{};
	while (CaseCount--)
	{
		cin >> N >> M;
		deque<pair<int, int>> Q;
		int Priority{};
		for (int i = 0; i < N; ++i)
		{
			cin >> Priority;
			Q.push_back({ i, Priority });
		}

		int OutCount = 1;
		while(!Q.empty())
		{
			auto Cur = Q.front(); Q.pop_front();
			bool IsRePush = false;
			for (int j = 0; j < Q.size(); ++j)
			{
				if (Cur.second < Q[j].second)
				{
					IsRePush = true;
					Q.push_back(Cur);
					break;
				}
			}
			if (!IsRePush)
			{
				if (Cur.first == M) cout << OutCount << '\n';
				++OutCount;
			}
		}
	}
}