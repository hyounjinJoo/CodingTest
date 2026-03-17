
#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Count{};
	cin >> Count;

	set<int> Numbers;
	int Value;
	for (int i = 0; i < Count; ++i)
	{
		cin >> Value;
		Numbers.insert(Value);
	}
	for (const int& number : Numbers)
	{
		cout << number << '\n';
	}
}