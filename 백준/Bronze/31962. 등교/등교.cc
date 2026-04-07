#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Line{}, Limit{}; cin >> Line >> Limit;
	int Answer{ -1 };
	while (Line > 0)
	{
		--Line;
		int S{}, T{};
		cin >> S >> T;
		if (S + T <= Limit)
		{
			if (Answer < S) Answer = S;
		}
	}

	cout << Answer;
}