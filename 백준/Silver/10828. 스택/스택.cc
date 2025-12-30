#include <iostream>
#include <string>

using namespace std;

int Stack[100000];
int Pos = -1;

void Push()
{    
    int Value = 0;
    cin >> Value;
    Stack[++Pos] = Value;
}

void Pop()
{
    if(Pos == -1)
    {
        cout << -1 << '\n';
        return;
    }
    
    cout << Stack[Pos--] << '\n';
}

void Size()
{
    cout << Pos + 1 << '\n';
}

void Empty()
{
    cout << (Pos == -1 ? 1 : 0);
    cout << '\n';
}

void Top()
{
    int ValueOfTop = -1;
    if(Pos > -1)
    {
        ValueOfTop = Stack[Pos];
    }
    cout << ValueOfTop << '\n';
}

int main()
{
    ios::ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int InputCount = 0;
    cin >> InputCount;
    
    string Command;
    for(int i = 0; i < InputCount; ++i)
    {
        cin >> Command;
        if(Command == "push")
        {
            Push();
        }
        else if(Command == "top")
        {
            Top();
        }
        else if(Command == "size")
        {
            Size();
        }
        else if(Command == "empty")
        {
            Empty();
        }
        else if(Command == "pop")
        {
            Pop();            
        }
    }
}