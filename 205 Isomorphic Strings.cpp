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


bool isIsomorphic(string s, string t)
{
    int mapS[256];
    int mapT[256];
    memset(mapS, -1, sizeof(mapS));
    memset(mapT, -1, sizeof(mapT));
    
    for (int i = 0; i < s.length(); i++) {
        int a = s[i];
        int b = t[i];
        if (mapS[a] == -1) {
            mapS[a] = b;
        }
        else if(mapS[a] != b){
            return false;
        }
        
        if (mapT[b] == -1){
            mapT[b] = a;
        }
        else if(mapT[b] != a){
            return false;
        }
    }
    
    return true;
}

int main()
{
    bool res = isIsomorphic("13", "42");
    return 1;
}
