//
//  main.cpp
//  Leetcode
//
//  Created by Eric on 15/5/14.
//  Copyright (c) 2015年 Eric. All rights reserved.
//

#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <list>

using namespace std;

vector<int> majorityElement(vector<int>& nums)
{
    int N = (int)nums.size();
    int count1 = 0;
    int count2 = 0;
    int major1 = INT_MIN;
    int major2 = INT_MIN;
    
    for (int i = 0; i < N; i++) {
        if (count1 == 0 || major1 == nums[i]) {
            major1 = nums[i];
            count1++;
        }
        else if(count2 == 0 || major2 == nums[i]){
            major2 = nums[i];
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < N; i++) {
        if (nums[i] == major1) {
            count1++;
        }
        else if(nums[i] == major2){
            count2++;
        }
    }
    
    vector<int> res;
    if (count1 > N/3)
        res.push_back(major1);
    if (count2 > N/3)
        res.push_back(major2);
    
    return  res;
    
}

int main(){
    
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    vector<int> solutions = summaryRanges(nums);
    
    return 1;
}