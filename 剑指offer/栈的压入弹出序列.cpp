//输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。
//假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，
//序列4,5,3,2,1是该压栈序列对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）

//自己想的思路，没有看答案~~
using namespace std;
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) 
    {
        int length = pushV.size();//序列长度
        if(length == 0)
        	return false;
        if(length == 1)
        	if(pushV == popV)
        		return true;
        	else
        		return false;

        int location=0;
        for(int i=0;i<length;i++)
        {
        	if(popV[i] == pushV[length-1])
        	{
        		location = i;//找到最后一个压入元素在序列2中的位置
        		break;
        	}
        }
        if(location != 0)
        {
        	for(int i=0;i<location;i++)//前半段
        	{
        		vector<int>::iterator it1 = find(pushV.begin(),pushV.end(),popV[i]);
        		vector<int>::iterator it2 = find(pushV.begin(),pushV.end(),popV[i+1]);
        		if(it1>it2)
        			return false;
        	}
        }
        
        if(location != length)
        {
        	for(int i=location;i<length-1;i++)//后半段
        	{
        		vector<int>::iterator it3 = find(pushV.begin(),pushV.end(),popV[i]);
        		vector<int>::iterator it4 = find(pushV.begin(),pushV.end(),popV[i+1]);
        		if(it3<it4)
        			return false;
        	}
        }
        return true;
    }
};