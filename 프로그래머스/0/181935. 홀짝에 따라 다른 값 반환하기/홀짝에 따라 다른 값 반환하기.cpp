#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    if(n % 2 == 1)
    {
        for(int Value = n; Value > 0; Value -= 2)
        {
            answer += Value;
        }
    }
    else
    {
        for(int Value = n; Value > 0; Value -= 2)
        {
            answer += Value * Value;
        }
    }
    
    return answer;
}