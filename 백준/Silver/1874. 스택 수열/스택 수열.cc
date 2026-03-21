
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	vector<int> V(N);
	int Input{};
	for (int i = 0; i < N; ++i)
	{
		cin >> Input;
		V[i] = Input;
	}

	vector<int> Check;
	vector<char> Answer;
	int NextPush = 1;
	for (int i = 0; i < N; ++i)
	{
		int Target = V[i];
		
		while (NextPush <= Target)
		{
			Check.push_back(NextPush++);
			Answer.push_back('+');
		}

		if (!Check.empty() && Check.back() == Target)
		{
			Check.pop_back();
			Answer.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < Answer.size(); ++i)
	{
		cout << Answer[i] << '\n';
	}
}