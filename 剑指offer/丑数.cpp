//把只包含质因子2、3和5的数称作丑数（Ugly Number）。
//例如6、8都是丑数，但14不是，因为它包含质因子7。 习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。
class Solution {
public:
    int GetUglyNumber_Solution(int index) 
    {
    	if(index==0)
    		return 0;
    	int i=0,j=0,k=0;
    	int ugly[index];
    	ugly[0]=1;
    	for(int m=1;m<index;m++)
    	{
    		ugly[m] = min(min(ugly[i]*2,ugly[j]*3),ugly[k]*5);
    		if(ugly[m]/ugly[j]==2)
    			i++;
    		if(ugly[m]/ugly[k]==3)
    			j++;
    		if(ugly[m]/ugly[i]==5)
    			k++;
    	}
    	return ugly[index-1]
    }
};