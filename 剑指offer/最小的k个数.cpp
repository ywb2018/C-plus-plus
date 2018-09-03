//输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。
#include<algorithm>
class Solution {
public:


    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
    {
    	vector<int> out;
    	if(k>=input.size() && input.size()>0)
    		return input;
    	if(k<=0 )
    		return out;
    	sort(input.begin(),input.end());


    	vector<int> out1(input.end()-k,input.end());
        return out1;

    }
};