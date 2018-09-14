class Solution {
public:
    string ReverseSentence(string str)
	{
		int len = str.size();
		if (len == 0)
			return str;
		string result = "";
		str = ' ' + str + ' ';
		len += 2;
		int first = len - 1, second = len - 1;
		while (second != 0)
		{
			if (str[first] == ' '&&str[second] == ' '&& first != second)//等于空格
			{
				string tempt = str.substr(first + 1, second - first);
				result += tempt;
				second = first;
			}
			first--;
		}
		return result.substr(0, result.size() - 1);
	}
};