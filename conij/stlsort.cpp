#include<iostream>
#include<algorithm>
using namespace std;
struct interval {
	int st;
	int et;
};
bool compare(interval i1, interval i2)
{
	return i1.st < i2.st;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {2, 5, 0, 1, 9, 4, 3}, i;
	sort(arr, arr + 7);
	for ( i = 0; i < 7; i++)
		cout << arr[i] << " ";
	cout << endl;
	//---------------------------------
	sort(arr, arr + 7, greater<int>());
	for ( i = 0; i < 7; i++)
		cout << arr[i] << " ";
	cout << endl;
	//--------------------------------
	interval in[] = {{6, 4}, {3, 4}, {4, 6}, {8, 13}};
	sort(in, in + 4, compare);
	for ( i = 0; i < 4; i++)
		cout << in[i].st << " : " << in[i].et << " , ";
	return 0;
}