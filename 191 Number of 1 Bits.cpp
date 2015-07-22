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

int hammingWeight(uint32_t n)
{
    int res = 0;
    while (n != 0) {
        res += n & 1;
        n = n >> 1;
    }
    
    return res;
}

int main(){
    int res = hammingWeight(15);
    
    return 1;
}
