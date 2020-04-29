#include<iostream>
using namespace std;
class Triplet {
public:
	int gcd;
	int x;
	int y;
};
Triplet extendedEuclid(int a, int b)
{

	if (b == 0)
	{
		Triplet myAns;
		myAns.gcd = a;
		myAns.x = 1;
		myAns.y = 0;
		return myAns;
	}
	Triplet smallAns = extendedEuclid(b, a % b);
	Triplet myAns;
	myAns.gcd = smallAns.gcd;
	myAns.x = smallAns.y;
	myAns.y = smallAns.x - ((a / b) * smallAns.y);
	return myAns;
}
void modInverse(int A, int M)
{
	Triplet myAns = extendedEuclid(A, M);
	cout << "Multiplicative modulo inverse is " << myAns.x << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int A, M;
	cin >> A >> M;
	modInverse(A, M);
	return 0;

}