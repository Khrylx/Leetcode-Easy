#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<vector<int>> generate(int numRows) 
{
	vector<vector<int>> solutions;

	if (numRows == 0)
	{
		return solutions;
	}

	vector<int> tmpSol;
	tmpSol.push_back(1);
	solutions.push_back(tmpSol);

	for (int i = 2; i <= numRows; i++)
	{
		if (i%2 == 1)
		{
			tmpSol.insert(tmpSol.begin()+i/2,tmpSol[i/2-1]*2);
		}
		else
		{
			tmpSol.insert(tmpSol.begin()+i/2,tmpSol[i/2-1]);
		}

		for (int j = i/2-1; j > 0; j--)
		{
			tmpSol[j] += tmpSol[j-1];
			tmpSol[i-j-1] = tmpSol[j];
		}
		solutions.push_back(tmpSol);
	}

	return solutions;
}

int main()
{
	vector<vector<int>> solutions = generate(7);

	return 1;
}