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


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    for (int i = m-1; i >= 0; i--) {
        nums1[i+n] = nums1[i];
    }
    
    int index = 0;
    int index1 = n;
    int index2 = 0;
    
    while (index2 < n) {
        if (index1 < m+n && nums1[index1] < nums2[index2]) {
            nums1[index++] = nums1[index1++];
        }
        else{
            nums1[index++] = nums2[index2++];
        }
    }
}

int main(){
    
    int m,n;
    cin >> m >> n;
    vector<int> nums1(m+n);
    vector<int> nums2(n);
    
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    
    merge(nums1,m,nums2,n);
    
    for (int i = 0; i < m+n; i++) {
        cout << nums1[i] << " ";
    }
    
    return 1;
}

