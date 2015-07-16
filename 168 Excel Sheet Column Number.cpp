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

string convertToTitle(int n)
{
    string s;

    while (n > 0) {
        s.insert(0, 1, 'A' + (n-1) % 26 );
        
        if (n % 26 == 0) {
            n /= 26;
            n--;
        }
        else
            n /= 26;

    }
    
    return s;
}


int main(){
    
    string s =  convertToTitle(26*26);
    return 1;
}
