#include <iostream>
using namespace std;
void makeSeive(int n)
{
	bool isPrime[n + 1];
	for (int i = 0; i <= n; i++)
		isPrime[i] = true;
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 1; i * i <= n; i++)
	{
		if (isPrime[i] == true)
			for (int j = i * i; i <= n; j = j + i)
				isPrime[j] = false;
	}
	for (int i = 1; i <= n; i++)
	{
		if (isPrime[i] = true)
			cout << i << " ";
		else {
			for (int j = 1; j * j <= n; j++)
				if (i % j == 0)
					cout << j << " ";
		}
	}
	cout << endl;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		makeSeive(n);
	}
	return 0;
}