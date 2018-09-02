//输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。
//假设输入的数组的任意两个数字都互不相同。
class Solution {
public:
	bool judge(vector<int> sequence,int start,int end)
	{
		if(sequence.empty())
			return false;
		if(start > end)
			return false;
		if(start == end)
			return true;

		int root = sequence[end];
    	int i = start;
    	for(;i<end;i++)
    	{
    		if(sequence[i]>root)
    			break;
    	}

    	int j = i;
    	for(;j<end;j++)
    	{
    		if(sequence[j]<root)
    			return false;
    	}

    	bool left = true;
    	if(i>start)
    		left = judge(sequence,start,i-1);
    	bool right = true;
    	if(i<end)
    		right = judge(sequence,i,end-1);

    	return (left&&right);
	}
    bool VerifySquenceOfBST(vector<int> sequence) 
    {
    	int length = sequence.size();//长度
    	bool out = true;
    	out = judge(sequence,0,length-1);

    	return out;
    }
};