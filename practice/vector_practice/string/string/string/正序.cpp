//例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
//正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
#include<string>
#include<iostream>
#include<vector>
using namespace std;
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
int main()
{
	string mystr = "student. a am i",new_str;

	new_str = ReverseSentence(mystr);
	cout << new_str;
	system("pause");
	return 0;
}
