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

vector<string> summaryRanges(vector<int>& nums)
{
    vector<string> solutions;
    int N = (int)nums.size();
    if ( N == 0)
        return solutions;
    
    int lb = nums[0];
    int ub = nums[0];
    
    for (int i = 1; i < N; i++) {
        if (nums[i] - 1 == ub) {
            ub++;
        }
        else{
            if (lb == ub)
                solutions.push_back(to_string(lb));
            else
                solutions.push_back(to_string(lb)+"->"+to_string(ub));
            lb = nums[i];
            ub = lb;
        }
    }
    
    if (lb == ub)
        solutions.push_back(to_string(lb));
    else
        solutions.push_back(to_string(lb)+"->"+to_string(ub));
    
    return solutions;
}

int main(){
    
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    vector<string> solutions = summaryRanges(nums);
    
    return 1;
}