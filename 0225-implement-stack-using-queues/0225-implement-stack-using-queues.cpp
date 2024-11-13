class MyStack {
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
       q.push(x);
       int sz=q.size()-1;
       for(int i=0;i<sz;i++){
        q.push(q.front());
        q.pop();
       }

    }
    
    int pop() {
        int frnt = q.front();
        q.pop();
        return frnt;

    }
    
    int top() {
        int frnt1= q.front();
        return frnt1;
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */