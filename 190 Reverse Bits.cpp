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

uint32_t reverseBits(uint32_t n)
{
    uint32_t res = 0;
    
    for (int i = 0; i < 32; i++) {
        res = (res << 1) + (n & 1);
        n = n >> 1;
    }
    
    return res;
}

int main(){
    uint32_t res = reverseBits(43261596);
    
    return 1;
}
