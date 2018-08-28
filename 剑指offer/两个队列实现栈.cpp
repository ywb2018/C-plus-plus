class Solution
{
public:
    void push(int node) {

    		stack1.push(node);
    }

    int pop() {
    	int a;
    	if(stack2.empty())//stack2空,则弹stack1到stack2
    	{
    		while(!stack1.empty())//stack1非空
    		{
	    		stack2.push(stack1.top());
	    		stack1.pop();
    		}
    	}
    	a = stack2.top();
    	stack2.pop();
    	return a;
    }
    
private:
    stack<int> stack1;
    stack<int> stack2;
    
    
};