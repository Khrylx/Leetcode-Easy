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
#include <unordered_set>

using namespace std;

string countAndSay(int n)
{
    string s = "1";
    
    for (int i = 1; i < n; i++) {
        int N = (int)s.length();
        string newS;
        int count = 1;
        for (int j = 1; j <= N; j++) {
            if (j == N || s[j] != s[j-1]) {
                newS.push_back('0'+count);
                newS.push_back(s[j-1]);
                count = 1;
            }
            else {
                count++;
            }
        }
        
        s = newS;
    }
    
    return s;
}

int main()
{
    string s = countAndSay(4);
    
    return 1;
}

