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

bool isAnagram(string s, string t)
{
    int C[26];
    memset(C, 0, sizeof(C));
    if (s.length() != t.length()) {
        return false;
    }
    
    for (int i = 0; i < s.length(); i++) {
        C[s[i]-'a']++;
        C[t[i]-'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (C[i] != 0) {
            return false;
        }
    }
    
    return true;
}
int main(){
    
    bool res = isAnagram("anagram", "nagaram");
    
    return 1;
}
