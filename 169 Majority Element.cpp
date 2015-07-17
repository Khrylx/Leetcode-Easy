#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

int majorityElement(vector<int>& nums) 
{
	int count = 0;
	int major;

	for (int i = 0; i <nums.size(); i++)
	{
		if (count == 0)
		{
			major = nums[i];
			count++;
		}
		else
			count += nums[i] == major ? 1 : -1;
	}

	return major;
}


int main()
{
	int N;
	cin >> N;
	vector<int> nums(N);
	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}

	int res = majorityElement(nums);

	return 1;
}