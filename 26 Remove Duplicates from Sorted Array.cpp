#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int removeDuplicates(vector<int>& nums) 
{
	int index = 0;

	for (int i=0;i<nums.size();i++)
	{
		if (i>0 && nums[i]==nums[i-1])
		{
			continue;
		}

		nums[index++]=nums[i];
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

	int index = removeDuplicates(nums);
	cout<<index<<endl;

	for (int i=0;i<index;i++)
	{
		cout<<nums[i]<<" ";
	}

	int tmp;
	cin>>tmp;
	return 1;
}