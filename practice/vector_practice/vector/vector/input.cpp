#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <sstream>
#include <map>

using namespace std;


/*������������������ʵ����ĿҪ��Ĺ���
��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
******************************��ʼд����******************************/
bool check(string s1,string s2,int len)
{
	int flag = 0;
	map<char, char>my_map;
	for (int i = 0; i < len; i++)
	{
		if (my_map.find(s2[i]) == my_map.end())
			my_map[s2[i]] = s1[i];

	}
		
}
int solve(string S, string T,int len)
{
	if (S.size() == 0 || T.size() == 0)
		return 0;
	string short_str, long_str;
	short_str = S.size() < T.size() ? S : T;
	long_str = S.size() > T.size() ? S : T;
	int short_len = short_str.size();
	map<char, char>my_map;
	int count,flag=0;
	for (int i = 0; i <= long_str.size() - short_str.size(); i++)
	{
		if (check(long_str.substr(i, i + short_len), short_str, short_len) == true)
			count++;
	}
	return count;
}
/******************************����д����******************************/


int main() {
	int res;
	string my = "12345";
	string _S;
	//getline(cin, _S);
	string _T;
	//getline(cin, _T);

	//res = solve(_S, _T);
	//cout << res << endl;
	
	cout << my.substr(1, 3)<<endl;
	system("pause");
	return 0;

}
