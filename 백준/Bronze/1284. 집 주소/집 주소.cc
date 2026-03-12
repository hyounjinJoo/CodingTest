#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 1 ~ N ~ 9999
	string N{};
	while (true)
	{
		cin >> N;
		if (N == "0") break;

		/*
		각 숫자 사이에는 1cm의 여백이 들어가야한다.
		1은 2cm의 너비를 차지해야한다. 0은 4cm의 너비를 차지해야한다. 나머지 숫자는 모두 3cm의 너비를 차지한다.
		호수판의 경계와 숫자 사이에는 1cm의 여백이 들어가야한다.
		*/
	
		int Result = 1;	// 여백 미리 반영
		for (const char& ch : N)
		{
			if (ch == '1') Result += 2;
			else if (ch == '0') Result += 4;
			else Result += 3;

			Result++;
		}
		cout << Result << '\n';

	}


	return 0;
}