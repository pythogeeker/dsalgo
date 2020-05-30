#include<iostream>
#include<tr1/unordered_map>
#include<string>
#include<utility>
using namespace std::tr1;
int main()
{
	unordered_map <string,int> ourmap;
	//insert
	//	pair <string,int> p("abc",1);
	//ourmap.insert(p);
	ourmap["def"] =2;
	return 0;
}
