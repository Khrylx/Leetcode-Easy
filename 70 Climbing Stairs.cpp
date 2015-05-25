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
#include <unordered_set>

using namespace std;

int climbStairs(int n)
{
    int a = 1;
    int b = 1;
    for (int i = 2; i <= n; i++) {
        int tmp = b;
        b = a;
        a = a + tmp;
    }
    
    return a;
}

int main(){
    cout << climbStairs(5) <<endl;
    return 1;
}

