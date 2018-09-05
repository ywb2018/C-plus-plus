//在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置,
// 如果没有则返回 -1（需要区分大小写）.
class Solution {
public:
    int FirstNotRepeatingChar(string str) 
    {
       map<char,int>my_map;
       for(int i=0;i<str.size();i++)
       		my_map[str[i]]++;

       for(int j=0;j<str.size();j++)
       		if(my_map[str[j]]==1)
       			return j;
       return -1;
    }
};