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

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    if (C <= E || G <= A || D <= F || H <= B) {
        return (C-A)*(D-B)+(G-E)*(H-F);
    }
    
    return (C-A)*(D-B)+(G-E)*(H-F) - (min(C,G)-max(A,E))*(min(D,H)-max(B,F));
}

int main()
{
    int res = computeArea(-3, 0, 3, 4, 0, -1, 9, 2);
    return 1;
}