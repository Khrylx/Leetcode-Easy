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


bool isHappy(int n)
{
    unordered_set<int> S;
    S.insert(n);
    
    while (1) {
        int newN = 0;
        while (n > 0) {
            int D = n % 10;
            newN += D*D;
            n /= 10;
        }
        if (newN == 1) {
            return true;
        }
        if (S.count(newN)) {
            return false;
        }
        n = newN;
        S.insert(n);
    }
}

int main()
{
   
    bool res = isHappy(18);
    return 1;
}
