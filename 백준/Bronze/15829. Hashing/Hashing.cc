#include <iostream>
#include <cmath>
using namespace std;

int Hashing(const int& Length, const string& Str)
{
	int Value{};
	for (int i = 0; i < Length; ++i)
	{
		Value += pow(31, i) * (Str[i] - 'a' + 1);
	}

	return Value % 1234567891;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Length{};
	cin >> Length;
	string Str{};
	cin >> Str;
	int Value{};
	Value = Hashing(Length, Str);
	cout << Value << '\n';
}