#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int InputCount = 0;
	cin >> InputCount;
	while (InputCount--)
	{
		int RepeatCount = 0;
		cin >> RepeatCount;
		string S, Output;
		cin >> S;
		for (int IDX = 0; IDX < S.length(); ++IDX)
		{
			for (int Iter = 0; Iter < RepeatCount; ++Iter)
			{
				Output += S[IDX];
			}
		}

		cout << Output << '\n';
	}

	return 0;
}