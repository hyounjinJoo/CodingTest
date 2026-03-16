#include <iostream>
using namespace std;

int GetGCD(int A,int B)
{
	int R = A % B;
	if (R == 0)
	{
		return B;
	}
	
	return GetGCD(B, R);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int A{}, B{};
	cin >> A >> B;
	int GCD = GetGCD(A, B);
	int LCM = A * B / GCD;

	cout << GCD << '\n' << LCM;
}