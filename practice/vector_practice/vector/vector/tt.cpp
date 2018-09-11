//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//vector<string> result;
//void my_dfs(string &s, int index, int num, string tmp)
//{
//	if ((5 - num) * 3 < s.size() - index)
//		return;
//	if (num == 5)
//	{
//		result.push_back(tmp);
//		return;
//	}
//	if (s[index] == '0')
//		my_dfs(s, index + 1, num + 1, tmp + (num == 1 ? "0" : ".0"));
//	else {
//		for (int i = 1; i < 4 && i + index <= s.size(); ++i)
//			if (i < 3 || string(s, index, i) <= "255")
//				my_dfs(s, index + i, num + 1, tmp + (num == 1 ? "" : ".") + string(s, index, i));
//	}
//}
//
//int main()
//{
//	string input_str;
//	cin >> input_str;
//	my_dfs(input_str, 0, 1, "");
//	cout << result.size()<< endl;
//
//	return 0;
//}
