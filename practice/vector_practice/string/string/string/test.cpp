//#include <iostream>
//#include <string>
//#include<map>
//#include<vector>
//
//using namespace std;
//string my_change(string my_string,int len)
//{
//	string tempt = my_string;
//	for (int i = 0; i < len; i++)
//		my_string[i] = tempt[len-i-1];
//	return my_string;
//}
//int main()
//{
//	string my_str;
//	
//	getline(cin,my_str);
//	vector<int>position;
//	vector<string>new_str;
//	int len = my_str.size();
//	for (int i = 0; i < len; i++)
//	{
//		if (my_str[i] == ' '&&my_str[i+1] != ' ')
//			position.push_back(i);//¼ÇÂ¼Î»ÖÃ
//	}
//	
//	new_str.push_back(my_change(my_str.substr(0, position[0]), position[0]));
//	new_str.push_back(" ");
//	for (int j = 0; j < position.size()-1; j++)
//	{
//		new_str.push_back(my_change(my_str.substr(position[j] + 1, position[j + 1] - position[j] - 1), position[j + 1] - position[j] - 1));
//		new_str.push_back(" ");
//	}
//	new_str.push_back(my_change(my_str.substr(position.back() + 1, len - 1), len - position.back() - 1));
//
//	string out = "";
//	for (int i = 0; i < new_str.size(); i++)
//		out += new_str[i];
//	cout << out;
//	system("pause");
//	return 0;
//}