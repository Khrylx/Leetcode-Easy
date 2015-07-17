#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

int titleToNumber(string s) 
{
	int res = 0;

	for (int i = 0; i < s.length(); i++)
	{
		res = res * 26 + s[i] - '@';
	}

	return res;
}


int main()
{

	int res = titleToNumber("AB");

	return 1;
}