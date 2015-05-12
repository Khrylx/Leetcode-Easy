#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int strStr(string haystack, string needle) 
{
	int index=0;

	while (1)
	{
		int i;
		for (i=0;i<needle.length();i++)
		{
			if (index+i>=haystack.length() || haystack[index+i] != needle[i])
			{
				break;
			}
		}
		if (i==needle.size())
		{
			return index;
		}
		if (index + i>= haystack.length())
		{
			break;
		}
		index++;
	}

	return -1;
}

int main()
{
	string s = "123231";
	string n = "231";
	int index = strStr(s,n);
	return 1;
}