#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Answer{}, Count{}, Repeat{5};
	cin >> Answer;
	while (Repeat > 0)
	{
		--Repeat;
		int Number{};
		cin >> Number;
		if (Number == Answer) ++Count;
	}

	cout << Count;
}