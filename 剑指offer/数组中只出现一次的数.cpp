//一个整型数组里除了两个数字之外，其他的数字都出现了偶数次。
//请写程序找出这两个只出现一次的数字
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) 
    {
    	map<int,int>my_map;
    	int i=0;
    	while(i<=data.size())
    	{
    		my_map[data[i]]++;
    		i++;
    	}
    	i=0;
    	int count=0;
    	while(i<=data.size())
    	{
    		if(my_map[data[i]]%2==1)//奇数个
    			if(count ==0)
    			{
    				*num1 = data[i];
    				count++;
    			}
    			else
    			{
    				*num2 = data[i];
    				break;
    			}
    		i++;
    	}
    }
};