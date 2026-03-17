#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<string> Str(3);
	cin >> Str[0] >> Str[1] >> Str[2];

	int Number{};
	// 무조건 숫자에 걸린다?
	for (int i = 0; i < 3; ++i)
	{
		if (isdigit(Str[i][0]))
		{
			Number = stoi(Str[i]) + (3 - i);
		}
	}

	string Answer{};
	if (Number % 3 == 0 && Number % 5 == 0) Answer = "FizzBuzz";
	else if (Number % 3 == 0 && Number % 5 != 0) Answer = "Fizz";
	else if (Number % 3 != 0 && Number % 5 == 0) Answer = "Buzz";
	else if (Number % 3 != 0 && Number % 5 != 0) Answer = to_string(Number);
	else Answer = "FizzBuzz";

	cout << Answer;
}