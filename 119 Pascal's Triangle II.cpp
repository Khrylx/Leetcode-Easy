#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> getRow(int rowIndex) 
{
	rowIndex++;
	vector<int> solutions(rowIndex);

	if (rowIndex == 1)
	{
		solutions[0] = 1;
		return solutions;
	}

	solutions[0] = 1;
	solutions.back() = 1;

	int index = 1;
	for (int i = 2; i < rowIndex; i++)
	{
		if (i%2 == 0)
		{
			solutions[index] = solutions[index-1];
			index++;
		}
		for (int j = index-1; j > 0; j--)
		{
			solutions[j] += solutions[j-1];
		}
	}

	for (int i = 0; i < rowIndex/2; i++)
	{
		solutions[rowIndex-1-i] = solutions[i];
	}


	return solutions;
}

int main()
{
	vector<int> solutions = getRow(4);

	return 1;
}