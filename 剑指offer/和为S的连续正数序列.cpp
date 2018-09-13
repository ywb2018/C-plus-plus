class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) 
    {
    	vector<vector<int>>result;
    	if(sum<3)
    		return result;
        int low=1;
        int high=2;
        int all;
        while(low<high)
        {
        	all=(low+high)*(high-low+1)/2; 
        	if(all==sum)//相等了
        	{
        		vector<int>list;
        		for(int i=low;i<=high;i++)
        			list.push_back(i);
        		result.push_back(list);
        		plow++;
        	}
        	else if(all <sum)//和小于sum
        	{
        		high++;
        	}
        	else//如果大于的话
        		low++;
        }
        return result;
    }
};