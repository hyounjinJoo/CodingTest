#include <iostream>
#include <stack>

// 입력은 여는 괄호 혹은 닫는 괄호 => { or }, 길이가 항상 짝수. 0, 혹은 2^n
// 1. 빈 문자열은 안정적.
// 2. S가 안정적이라면 {S}도 안정적.
// 3. S와 T가 안정적이라면, ST도 안정적
// {}, {}{}, {{}{}} 은 안정적
// }{, {{}{, {}{은 안정적이지 않다.
// 문자열에 행할 수 있는 연산은 여는 괄호와 닫는 괄호를 서로 바꾸는 것.
// }{ => }를 바꾸고, {를 바꾼다. => 2번
// {}{}{} => 안정적이라서 0번
// {{{} => {{을 그대로.. }를 바꾼다. => 1번
// 4. 입력의 마지막 줄은 '-'가 한 개 이상 주어진다.
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string Str;
	int Count = 1;
	while (true)
	{
		cin >> Str;
		if (Str[0] == '-') break;

		stack<char> St;
		int Answer = 0;

		for (char C : Str)
		{
			if (C == '{') St.push('{');
			else // case }
			{
				if (!St.empty()) St.pop();
				else
				{
					++Answer;
					St.push('{');
				}
			}
		}

		// 왜 자꾸 틀렸나 했더니 형식 안 맞춰줘서...
        // 남는 경우는 }} 혹은 }{ 혹은 {{ 인데
        // }{이면 Answer에서 }를 바꾸고 Stack에는 2개가 남으므로 1/2처리해서 1을 더해 수정 2번
        // }}혹은 {{으로 남으면 한 개만 수정하면 되므로 Answer + 1이므로 1/2처리가 맞다.
		cout << Count++ << ". " << Answer + St.size() / 2 << '\n';
	}

	return 0;
}