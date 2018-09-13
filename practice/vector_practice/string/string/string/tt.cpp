//
//#include <iostream>
//#include <string>
//#include<map>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	string my_str;
//	char this_char;
//	vector<char>single_char;
//	map<char, int>my_map;
//	cin >> my_str;
//	int len = my_str.size();
//	for (int i = 0; i < len; i++)
//	{
//		my_map[my_str[i]]++;
//	}
//	for (int j = 0; j < len; j++)
//	{
//		if (my_map[my_str[j]] == 1)//出现一次
//			single_char.push_back(my_str[j]);
//
//	}
//	if (single_char.size() < 1)//没有
//		return NULL;
//	else
//		cout << single_char.back();
//	system("pause");
//	return 0;
//}