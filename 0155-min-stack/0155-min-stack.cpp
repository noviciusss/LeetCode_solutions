class MinStack {
public:
    stack<int>main;
    stack<int>aux;
    MinStack() {
    }
    
    void push(int val) {
        main.push(val);
        if(aux.empty()|| aux.top()>=val){aux.push(val);}
    }
    
    void pop() {
        int tpval = main.top();
        main.pop();
        if(aux.top()==tpval){aux.pop();}
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return aux.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */