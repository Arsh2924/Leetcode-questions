#include <stack>
#include <limits.h>

class MinStack {
private:
    std::stack<int> s; // Main stack to hold the elements
    std::stack<int> minStack; // Auxiliary stack to track minimum values

public:
    MinStack() {}

    void push(int val) {
        s.push(val);
        // Push to minStack: if it's empty or the new value is less than or equal to the current minimum
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (s.empty()) {
            return; // Safeguard against popping from an empty stack
        }

        int curr = s.top();
        s.pop();
        // If the popped value is the minimum, also pop from minStack
        if (curr == minStack.top()) {
            minStack.pop();
        }
    }

    int top() {
        if (s.empty()) {
            return -1; // Safeguard for empty stack
        }
        return s.top(); // Return the top value
    }

    int getMin() {
        if (minStack.empty()) {
            return -1; // Safeguard for empty stack
        }
        return minStack.top(); // Return the current minimum
    }
};

/**
 * Example usage:
 * MinStack minStack;
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * int min = minStack.getMin(); // Returns -3
 * minStack.pop();
 * int top = minStack.top();     // Returns 0
 * int min2 = minStack.getMin(); // Returns -2
 */
