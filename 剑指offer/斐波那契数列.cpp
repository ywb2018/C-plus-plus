
class Solution {
public:
    int Fibonacci(int n) 
    {
    	int first=0,second=1,out=0;
        if(n ==0)
        	return 0;
        if(n ==1)
        	return 1;
        else
        {
        	for(int i=2;i<=n;i++)
            {
                out = first + second;
                first = second;
                second = out;
                
            }
            return out;
        }
    }
};