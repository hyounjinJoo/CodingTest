#include <iostream>
#include <vector>
#include <utility>
using namespace std;

struct Spec
{
	Spec() : kg{}, cm{} {}

public:
	int kg;
	int cm;
};

void Compare(vector<pair<Spec, int>>& Human)
{
	size_t Count{ Human.size() };
	int MoreBigger{ 0 };
	for (int i = 0; i < Count; ++i)
	{
		pair<Spec, int>& Self(Human[i]);
		MoreBigger = 1;

		for (int j = 0; j < Count; ++j)
		{
			if (&Self == &Human[j]) continue;
			
			if (Self.first.cm < Human[j].first.cm && Self.first.kg < Human[j].first.kg)
				MoreBigger++;
		}

		Self.second = MoreBigger;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	vector<pair<Spec, int>> Human(N);
	int _cm{}, _kg{};
	for (auto& spec : Human)
	{
		cin >> _cm >> _kg;
		spec.first.cm = _cm;
		spec.first.kg = _kg;
	}

	Compare(Human);

	for (auto& spec : Human)
	{
		cout << spec.second << ' ';
	}
}