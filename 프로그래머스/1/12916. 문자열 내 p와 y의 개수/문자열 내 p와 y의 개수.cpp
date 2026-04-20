#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = false;

    int CntP{}, CntY{};
    for(const char& Ch : s)
    {
        if(Ch == 'p' || Ch == 'P') ++CntP;
        else if(Ch == 'y' || Ch == 'Y') ++CntY;
    }
    
    if(CntP == CntY) answer = true;
    
    return answer;
}