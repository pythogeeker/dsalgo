#include <iostream>
using namespace std;
class triplet {
public:
	int gcd, x, y;
};
triplet extendedEucli(int a, int b)
{
	if (a < b)
		return extendedEucli(b, a);
	if (b == 0)
	{
		triplet myans;
		myans.x = 1;
		myans.gcd = a;
		myans.y = 0;
		return myans;
	}
	triplet smallans = extendedEucli(b, a % b);
	triplet myans;
	myans.gcd = smallans.gcd;
	myans.x = smallans.y;
	myans.y = (smallans.x - ((a / b) * smallans.y));
	return myans;
}
int main() {
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int a, b;
		cin >> a >> b;
		triplet obj = extendedEucli(a, b);
		cout << obj.gcd << " " << obj.x << " " << obj.y << endl;
	}
	return 0;

}