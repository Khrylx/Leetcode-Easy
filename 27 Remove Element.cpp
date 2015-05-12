#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int removeElement(vector<int>& nums, int val) 
{
	int index = 0;
	for (int i=0;i<nums.size();i++)
	{
		if (nums[i]==val)
		{
			continue;
		}

		nums[index++] = nums[i];
	}

	return index;
}

int main()
{
	int N;
	cin>>N;
	vector<int> nums(N);
	for (int i=0;i<N;i++)
	{
		cin>>nums[i];
	}

	int index = removeElement(nums,4);
	cout<<index<<endl;

	for (int i=0;i<index;i++)
	{
		cout<<nums[i]<<" ";
	}

	int tmp;
	cin>>tmp;
	return 1;
}