//���磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
//��ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��
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
		if (str[first] == ' '&&str[second] == ' '&& first != second)//���ڿո�
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
