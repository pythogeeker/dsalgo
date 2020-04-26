#include<iostream>
#include<map>
using namespace std;
char nonRepeat(string str)
{
	std::map<char, int > frequency;
	for (int i = 0; i < str.length(); i++)
	{
		char mychar = str[i];
		frequency[mychar]++;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (frequency[str[i]] == 1)
			return str[i];
	}
	return str[0];
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str;
	cin >> str;
	char c = nonRepeat(str);
	cout << c << endl;

}