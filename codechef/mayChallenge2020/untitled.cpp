#include<bits/stdc++.h>
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
		std::vector<int> v;
		int n, i, count = 1, max = 1, min = 1, l = 0;
		cin >> n;
		int x[n];
		for (i = 0; i < n; i++)
			cin >> x[i];
		for (i = 1; i < n; i++)
		{
			if (x[i] - x[i - 1] <= 2)
				v.push_back(1);
			else
				v.push_back(0);
		}
		for (auto it = v.begin(); it != v.end(); it++)
		{
			if (*it == 1)
			{
				count++;

			}
			if (count > max)
				max = count;
			if (*it == 0)
			{
				l++;
				if (min > max || l == 1)
				{
					min = max;
					count = 1;
				}
			}
		}
		if (l == 0)
			min = max;
		cout << min << " " << max << endl;
	}
	return 0;
}