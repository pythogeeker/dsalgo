#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {2, 5, 0, 1, 9, 4, 3}, i;
	sort(arr, arr + 7);
	cout << "present " << binary_search(arr, arr + 7, 3) << endl;
	//but this function only returns if element is present or not
	//to return index we us e another function called as lower_bound;
	cout << "index " << lower_bound(arr, arr + 7, 8) - arr << endl;
	//now this function returns pointer or iterator to the element
	cout << "index upper" << upper_bound(arr, arr + 7, 3) - arr << endl;
	//if element is not present upper bound returns index of next higher //element
	cout << "index upper" << upper_bound(arr, arr + 7, 8) - arr << endl;
	return 0;
}