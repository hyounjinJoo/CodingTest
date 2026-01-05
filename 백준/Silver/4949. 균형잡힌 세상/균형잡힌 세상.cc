#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	string Input;

	while (true)
	{
		getline(cin, Input);
		if (Input == ".")
		{
			break;
		}

		stack<char> ST;
		bool Result = true;

		for (const char& ch : Input)
		{
			if (ch == '(' || ch == '[')
			{
				ST.push(ch);
			}
			else if (ch == ')')
			{
				if(ST.empty() || ST.top() != '(')
				{
					Result = false;
					break;
				}

				ST.pop();
			}
			else if (ch == ']')
			{
				if (ST.empty() || ST.top() != '[')
				{
					Result = false;
					break;
				}

				ST.pop();
			}
		}

		if (!ST.empty())
		{
			Result = false;
		}

		cout << (Result ? "yes" : "no") << '\n';
	}
}