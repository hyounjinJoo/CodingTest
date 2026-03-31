#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{}, M{};
	cin >> N >> M;

	int Sum{}, Num{};
	set<int> Numbers;
	for (int i = 0; i < M; ++i)
	{
		cin >> Num;
		for (int j = Num; j <= N; j += Num)
		{
			Numbers.insert(j);
		}
	}

	for (const int& Value : Numbers)
	{
		Sum += Value;
	}

	cout << Sum;
}