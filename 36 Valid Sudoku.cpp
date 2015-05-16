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


bool isValidSudoku(vector<vector<char>>& board)
{
    for (int i = 0; i < 9; i++) {
        unordered_set<int> S;
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') {
                continue;
            }
            int num = board[i][j]-'0';
            if (S.find(num) == S.end()) {
                S.insert(num);
            }
            else{
                return false;
            }
        }
    }
    
    for (int i = 0; i < 9; i++) {
        unordered_set<int> S;
        for (int j = 0; j < 9; j++) {
            if (board[j][i] == '.') {
                continue;
            }
            int num = board[j][i]-'0';
            if (S.find(num) == S.end()) {
                S.insert(num);
            }
            else{
                return false;
            }
        }
    }
    
    for (int k = 0; k < 3; k++) {
        for (int p = 0;  p < 3; p++) {
            unordered_set<int> S;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (board[3*k+i][3*p+j] == '.') {
                        continue;
                    }
                    int num = board[3*k+i][3*p+j]-'0';
                    if (S.find(num) == S.end()) {
                        S.insert(num);
                    }
                    else{
                        return false;
                    }
                }
            }
        }
    }
    
    
    return true;
}

int main()
{
//    int N,K;
//    cin >> N >> K;
//    
//    vector<int> nums(N);
//    for (int i = 0 ; i < N; i++) {
//        cin >> nums[i];
//    }
//
//    cout<<"solution = "<<searchInsert(nums,K)<<endl;
//    
    return 1;
}

