class Queue {
private:
    stack<int> S;
    stack<int> tmpS;
public:
    // Push element x to the back of queue.
    void push(int x) {
        while (!S.empty()) {
            tmpS.push(S.top());
            S.pop();
        }
        S.push(x);
        while (!tmpS.empty()) {
            S.push(tmpS.top());
            tmpS.pop();
        }
    }
    
    // Removes the element from in front of queue.
    void pop(void) {
        S.pop();
    }
    
    // Get the front element.
    int peek(void) {
        return S.top();
    }
    
    // Return whether the queue is empty.
    bool empty(void) {
        return S.empty();
    }
};
