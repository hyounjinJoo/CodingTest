
#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	list<int> Cards;
	int Count{};
	cin >> Count;
	for (int i = 1; i <= Count; ++i)
	{
		Cards.push_back(i);
	}

	int SecondCard{};
	while (Cards.size() != 1)
	{
		Cards.pop_front();
		SecondCard = Cards.front();
		Cards.pop_front(); Cards.push_back(SecondCard);
	}

	cout << Cards.front();
}