#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<map>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	std::vector<int > v(5);
	for (int i = 1; i <= 5; i++)
		v[i - 1] = i;
	vector<int>:: iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
//---------------string.........................
	string s = "mudit";
	//copy string s into s1
	string s1(s);
	cout << s1 << endl;
	string s2(s, 2, 2);
	cout << s2 << endl;
	string s3 = s.substr( 2, 4);
	cout << s3 << endl;
	if (s1.compare(s2) == 0)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
//----------------------PAIRS -------------------------------
	pair<int, char> p;
	pair<int , char>p1(1, 'a');
	cout << p1.first << " " << p1.second << endl;
	p = make_pair(2, 'c');
	cout << p.first << " " << p.second << endl;

//--------------------------SET--------------------------------------
	//implemented using balanced binary search tree
	// search time logn and insert time logn
	std::set <int> st;
	int arr[] = {2, 3, 4, 2, 3, 4};
	set<int>:: iterator ite;
	for (int i = 0; i < 6; i++)
		st.insert(arr[i]);
	for (ite = st.begin(); ite != st.end(); ite++)
		cout << *ite << endl;
	if (st.find(6) != st.end())
		cout << "yeah i found it" << endl;
	else
		cout << "not found sorry" << endl;

//----------------------MAP------------------------------------------
	//implemented using binary search tree all operations in O(Logn)
	//used when need to find frequency

	map<int , int> mp;
	for (int i = 0; i < 6; i++)
		mp[arr[i]] += 1;
	map<int , int > ::iterator mit;
	for (mit = mp.begin(); mit != mp.end(); mit++)
		cout << mit->first << " : " << mit->second << endl;
	//don't use . use -> as it is implemented using bst so linked list

//---------------------unordered_map-----------------------------
	//it is implemented using hash table so
	// for insert delete and find  time taken is 0(1) in average case
	//include<unordered_map> and all functionalities are same as map






	return 0;
}