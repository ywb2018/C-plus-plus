//对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。
//例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！

class Solution {
public:
    string LeftRotateString(string str, int n) 
    {
        if(str.size()==0)//如果为空
        	return str;

        queue<char> tempt;
        for(int i=0;i<str.size();i++)
        	tempt.push(str[i]);

        while(n)
        {
        	tempt.push(tempt.front());
        	tempt.pop();
        	n--;
        }
        string my_str="";
        while(!tempt.empty())
        {
        	my_str+=tempt.front();
        	tempt.pop();
        }
        return my_str;
    }
};