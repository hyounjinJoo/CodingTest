#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Nth{};
	cin >> Nth;
	int Count{};
	int Value{ 666 };
	string STR{};
	vector<int> Series;
	while (true)
	{
		STR = to_string(Value);
		if (STR.find("666") != string::npos)
		{
			++Count;
			Series.push_back(Value);
		}

		if (Count == Nth) break;

		++Value;
	}
	
	sort(Series.begin(), Series.end(), less<int>());
	cout << Series[Nth - 1];
}