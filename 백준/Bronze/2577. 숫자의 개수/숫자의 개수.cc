#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Values[10];
	memset(Values, 0, sizeof(int) * 10);

	int Result = 1, Input = 0;
	cin >> Input; 
	Result *= Input;
	cin >> Input; 
	Result *= Input;
	cin >> Input; 
	Result *= Input;

	while (Result)
	{
		Values[Result % 10]++;
		Result /= 10;
	}

	for (int IDX = 0; IDX < 10; ++IDX)
	{
		cout << Values[IDX] << '\n';
	}

	return 0;
}