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

int trailingZeroes(int n)
{
    int res = 0;
    
    while ( n /= 5) {
        res += n;
        
    }
    
    return res;
}

int main(){
    
    int res = trailingZeroes(2147483647);
    return 1;
}
