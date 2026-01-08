// 글자를 주고 쌍이 되는 글자끼리 글자 위로 연결했을 때, 그 선이 겹치지 않아야 한다.
// ABAB -> 겹친다.
// AABB -> 안 겹친다.
// ABBA -> 안 겹친다.
// stack으로 처리? 
// A...B...A...B? 다른 게 나와서 선이 겹처지는 결과가 나옴.
// AA...둘이 먼저 연결, BB 둘이 연결 선 안겹침
// ABB BB가 먼저 연결, 나중에 온 A가 A와 연결되는데, BB가 연결된 선 위로 가므로 안겹침.
// ABBBBA 일때는? BB 연결, BB 연결, 그 위로 좌우의 A쌍이 연결.
#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	/*
	3
	ABAB
	AABB
	ABBA
	*/

	int Count = 0, GoodWord = 0;;
	cin >> Count;

	string Word;
	while (Count--)
	{
		// 이전 stack은 필요하지 않음.
		stack<char> Stack;
		cin >> Word;
		for (int IDX = 0; IDX < Word.length(); ++IDX)
		{
			if (Word[IDX] == 'A')
			{
				if (!Stack.empty() && Stack.top() == 'A')
				{
					Stack.pop();
					continue;
				}

				Stack.push('A');
			}
			else	// else. B
			{
				if (!Stack.empty() && Stack.top() == 'B')
				{
					Stack.pop();
					continue;
				}

				Stack.push('B');
			}
		}

		if (Stack.empty()) GoodWord++;
	}

	cout << GoodWord << '\n';

	return 0;
}
