// 올바른 문자열 : ()
// ()이 올바르면 (x)도 올바르다.
// ()()를 접합한 것도 올바르다.
// 주어진 괄호 문자열이 올바른지 판단해라
#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Count = 0;
	cin >> Count;
	string Str;
	while (Count--)
	{
		cin >> Str;
		stack<char> Stack;
		for (const char& CH : Str)
		{
			if (CH == '(')
			{
				Stack.push(CH);
			}
			else
			{
				if (!Stack.empty() && Stack.top() == '(') Stack.pop();
				else Stack.push(CH);
			}
		}

		cout << (Stack.empty() ? "YES" : "NO") << '\n';
	}
}
