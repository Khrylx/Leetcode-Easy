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

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k)
{
    unordered_set<int> S;
    int N = (int)nums.size();
    
    for (int i = 0; i < N; i++) {
        if (i > k) {
            S.erase(nums[i-k-1]);
        }
        if (S.count(nums[i])) {
            return true;
        }
        S.insert(nums[i]);
    }
    
    return false;
}

int main()
{
//    int N;
//    cin >> N;
//    vector<int> nums(N);
//    
//    for (int i = 0; i < N; i++) {
//        cin >> nums[i];
//    }
    
    
    return 1;
}
