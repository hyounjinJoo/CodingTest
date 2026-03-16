#include <iostream>
using namespace std;

long long Hashing(const int& Length, const string& Str)
{
	const int M{ 1234567891 };
	const int R{ 31 };

	long long Value{};
	long long rPower{ 1 };// 31의 제곱을 저장.

	for (int i = 0; i < Length; ++i)
	{
		int CharNum = Str[i] - 'a' + 1;
		long long Term = (CharNum * rPower) % M;
		Value = (Value + Term) % M;
		rPower = (rPower * R) % M;
	}

	return Value;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Length{};
	cin >> Length;
	string Str{};
	cin >> Str;
	long long Value{};
	Value = Hashing(Length, Str);
	cout << Value << '\n';
}