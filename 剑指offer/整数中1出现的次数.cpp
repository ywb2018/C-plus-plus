#include<sstream>
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
    	stringstream input;
    	int count = 0;
    	for(int i=1;i<=n;i++)
    	{
    		input<<i;
    		string str = input.str(); //将 int -》string
    		int j;
    		while(str[j]!='\0')
    		{
    			if(str[j]=='1')
    				count++;
    		}
    	}
    	return count;
    }
};