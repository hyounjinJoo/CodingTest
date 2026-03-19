
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int K{};
	cin >> K;

	stack<int> Numbers;
	int Input{};
	while (K--)
	{
		cin >> Input;
		if (Input == 0) Numbers.pop();
		else Numbers.push(Input);
	}
	int Sum{};
	while (!Numbers.empty())
	{
		Sum += Numbers.top(); Numbers.pop();
	}

	cout << Sum;
}