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

bool isPowerOfTwo(int n) {
    return n > 0 && !(n&(n-1));
}


int main(){
    
    bool res = isPowerOfTwo(3);
    return 1;
}
