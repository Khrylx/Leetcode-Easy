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

int lengthOfLastWord(string s)
{
    int index = (int)s.find_last_not_of(' ');
    
    if (index == string::npos) {
        return 0;
    }
    
    int end = index;
    while (index >= 0 && s[index]!=' ') {
        index--;
    }
    
    return end - index;
}

int main()
{
    string s = "Hello   ";
    
    cout<< lengthOfLastWord(s)<<endl;
    return 1;
}

