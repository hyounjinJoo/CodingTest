
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N{};
	cin >> N;
	list<int> List;
	for(int i = 0; i < N; ++i)
	{
		List.push_back(i + 1);
	}
	int K{};
	cin >> K; K--;
	vector<int> NK(N);
	auto Iter = List.begin();
	for(int i = 0; i < N; ++i)
	{
		int Count = K;
		while (Count > 0)
		{
			if (Iter != List.end()) Iter++;
			else if (Iter == List.end())
			{
				Iter = List.begin();
			}

			if (Iter == List.end()) Iter = List.begin();
			Count--;
		}
		NK[i] = *Iter;
		Iter = List.erase(Iter);
		if (Iter == List.end()) Iter = List.begin();
	}

	cout << '<';
	for (int i = 0; i < N; ++i)
	{
		cout << NK[i];
		if (i != N - 1)
		{
			cout << ", ";
		}
	}
	cout << '>';
}