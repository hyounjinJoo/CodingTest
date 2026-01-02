#include <iostream>

using namespace std;

int Queue[10001];
int Head = 0;
int Tail = 0;

void Push() 
{
	int Value = 0;
	cin >> Value;
	Queue[Tail++] = Value;
}

void Pop()
{
	if (Head == Tail)
	{
		cout << -1 << '\n';
		return;
	}
		
	cout << Queue[Head++] << '\n';
}

void Size()
{
	cout << Tail - Head << '\n';
}

void Empty()
{
	cout << (Tail - Head ? 0 : 1) << '\n';
}

void Front()
{
	cout << (Tail - Head ? Queue[Head] : -1) << '\n';
}

void Back()
{
	cout << (Tail - Head ? Queue[Tail - 1] : -1) << '\n';
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int CommandCount = 0;
	std::cin >> CommandCount;
	string Command;
	while (CommandCount--)
	{
		cin >> Command;
		if (Command == "push")
		{
			Push();
		}
		else if (Command == "pop")
		{
			Pop();
		}
		else if (Command == "size")
		{
			Size();
		}
		else if (Command == "empty")
		{
			Empty();
		}
		else if (Command == "front")
		{
			Front();
		}
		else
		{
			Back();
		}
	}

	return 0;
}