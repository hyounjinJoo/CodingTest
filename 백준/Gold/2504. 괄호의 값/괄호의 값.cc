#include <iostream>
#include <stack>
#include <string>


using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	stack<char> Stack;
	string Str;

	cin >> Str;
	int StrLength = Str.length();
	// 0. 입력이 올바르지 않다면 0을 출력한다.
	// 0. 올바른 괄호 xy는 x+y로 계산된다.
	
	// 1. 괄호 ()는 값이 2이다. -> 현 문자가 )일 때, 이전 문자가 (이면 값을 2로 처리한다.
	// 2. 괄호 []는 값이 3이다. -> 위와 동일. 3으로 처리
	// 3. (x)는 x에 2를 곱한다. -> 괄호가 열리는 순간 2를 곱한다?
	// 4. [x]는 x에 3을 곱한다.	-> 위와 동일한데 맞는지?
	
	// ex. (()[[]])([]) => 28
	// 2 x ()[[]] + 2 x []
	// 2 x ( 2 + 3 x (3) ) + 2 x ( 3 )
	// 위 수식에 따라 괄호가 열리는 순간 경우에 따라 2나 3이 곱해진다. (ok)
	// 괄호가 닫히는 순간 이전 문자열이 쌍을 이루면 더해준다??? () => (열릴 때 2를 곱한다. )닫힐 때 곱해준 값을 더해준다.
	// => 어떤 값 1을 두고 열릴 때 2를 곱하고 닫힐 때 쌍을 이루면 그 값을 더한다. 닫히는 문자가 나오면 정해진 값을 어떤 값에서 나눠준다.
	
	int Sum = 0;	// 결과값
	int Num = 1;	// 괄호에 따라 계산된 값. 곱해지고 나눠진다.
	for (int IDX = 0; IDX < StrLength; ++IDX)
	{
		//경우는 4가지.
		if (Str[IDX] == '(')
		{
			Stack.push('(');
			Num *= 2;
		}
		else if (Str[IDX] == '[')
		{
			Stack.push('[');
			Num *= 3;
		}
		else if (Str[IDX] == ')')
		{
			if (Stack.empty() || Stack.top() != '(')
			{
				cout << 0 << '\n';
				return 0;
			}

			if (Str[IDX - 1] == '(') Sum += Num;
			Stack.pop();
			Num /= 2;
		}
		else if (Str[IDX] == ']')
		{
			if (Stack.empty() || Stack.top() != '[')
			{
				cout << 0 << '\n';
				return 0;
			}

			if (Str[IDX - 1] == '[') Sum += Num;
			Stack.pop();
			Num /= 3;
		}
	}


	if (!Stack.empty())
	{
		cout << 0 << '\n';
		return 0;
	}
	cout << Sum << '\n';

	return 0;
}