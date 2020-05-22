#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ll long long
ll findmax(ll x, ll y, ll l, ll r)
{
	if ((x | y) >= l && (x | y) <= r)
		return (x | y);
	return findmax
}
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
		ll x, y, l, r, i;
		cin >> x >> y >> l >> r;
		if ((x | y) <= r)
			cout << (x | y) << endl;
		else
		{
			ll index = 0;
			ll max = 0, value;
			for (i = (x & y); i <= r; i++)
			{
				value = findmax(x, y, i);

				if (value > max)
				{

					max = value;
					index = i;

				}
			}
			cout << index << endl;

		}

	}

	return 0;
}