//例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
//正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
class Solution {
public:
    string ReverseSentence(string str) 
    {
    	int len = str.size();
        if(len==0)
        	return str;

        int first=len-1,second=len-1;
        for(int i=0;i<len;i++)
        {
        	if(str[first]==' ')//等于空格
        		string tempt = str.substr(first+1,second-first+1);
        }
    }
};