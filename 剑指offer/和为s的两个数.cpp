//输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，
//如果有多对数字的和等于S，输出两个数的乘积最小的。
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) 
    {
    	vector<int>result;
    	int len = array.size();
        if(len < 2)//长度不够
        	return result;
        
        int low=0,high=len-1,mult=0;
        while(low<high)
        {
        	int add = array[low]+array[high];
        	if(add==sum)//
        	{
        		if(array[low]*array[high]<)
        	}
        }
        return result;
    }
};