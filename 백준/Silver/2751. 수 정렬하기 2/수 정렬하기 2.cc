#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Count{};
	cin >> Count;

	vector<int> Numbers(Count);
	for (int i = 0; i < Count; ++i)
	{
		cin >> Numbers[i];
	}
    sort(Numbers.begin(), Numbers.end());
    
	for (const int& number : Numbers)
	{
		cout << number << '\n';
	}
}