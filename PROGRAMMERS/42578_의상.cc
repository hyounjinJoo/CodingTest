#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> Clothes) 
{    
    int Answer = 1;
    
    map<string, int> CountByType;
    for(int IDX = 0; IDX < Clothes.size(); ++IDX)
    {
        CountByType[Clothes[IDX][1]]++;
    }
    
    for(const auto& Count : CountByType)
    {
        // 안 입은 경우를 포함하여 추가
        Answer *= (Count.second + 1);
    }
    
    // 전부 안 입은 경우 제외.
    Answer--;
    
    return Answer;
}