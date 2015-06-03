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
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> grayCode(int n)
{
    vector<int> solutions;
    if (n == 0) {
        solutions.push_back(0);
        return solutions;
    }
    if (n==1) {
        solutions.push_back(0);
        solutions.push_back(1);
        return solutions;
    }
    
    vector<int> tmpSolutions = grayCode(n-1);
    int tSize = (int)tmpSolutions.size();
    for (int i = tSize-1; i >= 0; i--) {
        tmpSolutions.push_back(tmpSolutions[i]+pow(2,n-1));
    }
    
    return tmpSolutions;
}

int main(){
    
    vector<int> nums = grayCode(3);
    
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    
    return 1;
}

