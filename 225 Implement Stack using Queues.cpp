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

class Stack {

private:
    queue<int> Q;
    
public:
    // Push element x onto stack.
    void push(int x) {
        Q.push(x);
        for (int i = 0; i < Q.size()-1; i++) {
            Q.push(Q.front());
            Q.pop();
        }
    }
    
    // Removes the element on top of the stack.
    void pop() {
        Q.pop();
    }
    
    // Get the top element.
    int top() {
        return Q.front();
    }
    
    // Return whether the stack is empty.
    bool empty() {
        return Q.empty();
    }
};

int main()
{
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    cout << S.top() << endl;
    S.pop();
    cout << S.top() << endl;
    S.pop();
    cout << S.top() << endl;
    S.pop();
    return 1;
}