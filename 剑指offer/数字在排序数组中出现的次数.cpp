//统计一个数字在排序数组中出现的次数。
class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) 
    {
        
        if(data.size() == 0 || data[data.size()-1]<k || data[0]>k)//小于最小值，大于最大值，vector为空
        	return 0;
        int count=0;
        int i=0;
        while(i<= data.size()-1)
        {
        	if(data[i]==k)
        		count++;
            i++;
        }
        return count;
    }
};