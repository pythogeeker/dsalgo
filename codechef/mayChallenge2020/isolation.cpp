#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int n, q, i;
		cin >> n >> q;
		string str;
		cin >> str;
		ll c[q];
		int count[q] = {0};
		for (i = 0; i < q; i++ )
			cin >> c[i];

		std::map<char, int > m;

		for (i = 0; i < str.size(); i++)
		{
			m[str[i]] += 1;
		}

		for (i = 0; i < q; i++)
		{
			for (auto it = m.begin(); it != m.end(); it++)
			{
				if ((it->second) > c[i])
					count[i] = count[i] + ((it->second) - c[i]);
			}
		}
		for (i = 0; i < q; i++)
			cout << count[i] << endl;
	}
	return 0;
}