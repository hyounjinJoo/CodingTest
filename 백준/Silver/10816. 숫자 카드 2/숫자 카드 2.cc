
#include <iostream>
#include <map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	map<int, int> Cards;
	int Input{};
	while(N--)
	{
		cin >> Input;
		Cards[Input]++;
	}
	cin >> N;
	while (N--)
	{
		cin >> Input;
		auto IterEnd = Cards.end();
		if (Cards.find(Input) != IterEnd)
		{
			cout << Cards[Input] << ' ';
		}
		else
		{
			cout << 0 << ' ';
		}
	}
}