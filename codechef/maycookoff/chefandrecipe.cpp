#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		std::map<int, int> mymap;
		for (int i = 0; i < n; ++i)
		{
			mymap[arr[i]] += 1;
		}
		bool flag = false;
		int count = 0;
		int val[10000] = {0};
		for (auto it = mymap.begin(); it != mymap.end(); it++)
		{
			val[count] = it->second;
			count++;
		}
		for (int i = 0; i < count; i++) {
			for (int j = i + 1; j < count; j++) {
				if (val[i] == val[j])
					flag = true;
			}
		}
		if (flag == true)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}