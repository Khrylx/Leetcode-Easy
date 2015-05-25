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

string addBinary(string a, string b)
{

    string& s1 = a.length() > b.length() ? a : b;
    string& s2 = a.length() > b.length() ? b : a;
    int n1 = (int)s1.length();
    int n2 = (int)s2.length();
    
    int overflow = 0;
    for (int i = 0; i < n1; i++) {
        s1[n1-1-i] += (i < n2 ? (s2[n2-1-i]-'0') : 0) + overflow;
        if (s1[n1-1-i] > '1') {
            s1[n1-1-i] -= 2;
            overflow = 1;
        }
        else
            overflow = 0;
    }
    if (overflow) {
        s1.insert(0, 1,'1');
    }
    return s1;
}

int main(){

    cout << addBinary("11001000011101111111010011101001111111110000110101000", "1010110011100010000110100011001101110001111001001010001100000100011111011011111")<<endl;
    return 1;
}

