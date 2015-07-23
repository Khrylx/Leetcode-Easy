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


int countPrimes(int n)
{
    bool mark[n];
    memset(mark, false, sizeof(mark));
    
    for (int i = 2; i <= sqrt(n-1); i++) {
        if (mark[i])
            continue;
        
        for (int j = 2*i; j < n; j += i) {
            mark[j] = true;
        }
    }
    
    int res = 0;
    for (int i = 2; i < n; i++) {
        if (!mark[i]) {
            res++;
        }
    }
    return res;
}

int main()
{
    int res = countPrimes(100);
    return 1;
}
