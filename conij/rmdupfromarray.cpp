#include<iostream>
#include<vector>
#include<set>
std::vector<int> removeDuplicates(std::vector<int > v)
{
	std::set <int> s;
	std::vector<int > result;
	for (int i = 0; i < v.size(); i++)
	{
		if (s.find(v[i]) == s.end())
		{
			s.insert(v[i]);
			result.push_back(v[i]);
		}
	}
	return result;
}
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v;
	v.push_back(105);
	v.push_back(106);
	v.push_back(111);
	v.push_back(114);
	v.push_back(105);
	v.push_back(135);
	v.push_back(138);
	v.push_back(111);
	v.push_back(147);
	v.push_back(114);
	std::vector<int > result = removeDuplicates(v);

	for (auto i = result.begin(); i != result.end(); ++i)
	{
		cout << *i << endl;
	}


	return 0;
}