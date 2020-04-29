#include<iostream>
using namespace std;
//this looks simple but inner working is not simple as that
int gcd(int a, int b)
{
	if (a < b)
		return gcd(b, a);
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
//algorithm->> gcd(a,b) is gcd(b,a%b) if a>b
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
}