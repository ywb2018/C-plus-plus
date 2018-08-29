// 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，
// 所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
class Solution {
public:
    void reOrderArray(vector<int> &array) 
    {
    	int length = array.size();//长度
    	vector<int> out(length,0);
    	int i =0,k=0,m = length-1;
    	while(i<=length-1)
    	{

    		if(array[i]%2==1)//奇数
    		{
    			out[k]=array[i];
    			k++;
    		}
    		if(array[length-1-i]%2==0)
    		{
    			out[m]=array[length-1-i];
    			m--;
    		}
    		i++;
    	}

        array.assign(out.begin(),out.end());
    }
};