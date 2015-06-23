#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool isPalindrome(string s) 
{
	string newS;

	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z')  || (s[i] >= '0' && s[i] <= '9'))
		{
			newS += s[i];
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			newS += s[i]-'A'+'a';
		}
	}

	int N = (int)newS.length();
	for (int i = 1; i <= N/2; i++ )
	{
		if (newS[i-1] != newS[N-i])
			return false;
	}

	return true;
}

int main(){


	cout << isPalindrome("A man, a plan, a canal: Panama") <<endl;


	return 1;
}