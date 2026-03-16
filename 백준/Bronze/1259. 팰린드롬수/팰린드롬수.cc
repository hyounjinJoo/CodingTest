#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		string Word{};
		cin >> Word;
		if (Word == "0") break;

		bool IsPalindrome = true;
		int Length = Word.length();

		for (int i = 0; i < Length / 2; ++i)
		{
			if (Word[i] != Word[Length - 1 - i])
			{
				IsPalindrome = false;
				break;
			}
		}

		if (IsPalindrome) cout << "yes\n";
		else cout << "no\n";		
	}
}