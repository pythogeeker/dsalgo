#include<iostream>
using namespace std;
int makeSeive(int n)
{
	bool isPrime[n + 1];
	int count = 0, i, j;
	for (i = 0; i < n + 1; i++)
		isPrime[i] = true;
	isPrime[0] = false;
	isPrime[1] = false;
	for (i = 2; i * i <= n; i++)
	{
		if (isPrime[i] == true)
		{
			for (j = i * i; j <= n; j = j + i)
			{

				isPrime[j] = false;
			}
		}
	}
	for (i = 2; i < n + 1; i++)
	{
		if (isPrime[i] == true)
			count++;
	}
	return count;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int i = makeSeive(n);
	cout << "No of primes in range " << 1 << " to " << n << " is " << i << endl;
}