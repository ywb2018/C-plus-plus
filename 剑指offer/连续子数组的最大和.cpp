
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) 
    {
    	int length = array.size();
    	int f = array[0],result = array[0];
    	for(int i = 1;i<length;i++)
    	{
    		f = max(f+array[i],array[i]);
    		result = max(f,result);
    	}
    	return result;
    }
};