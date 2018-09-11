//#include <iostream>
//
//#include <algorithm>
//#include <string>
//#include <set>
//
//using namespace std;
////Ö÷³ÌÐò
//int main()
//{
//	string input;
//	cin >> input;
//
//	set<char> my_set;
//	int max_num = 0;
//	int left = 0;
//	int i = 0;
//
//	while (i < input.length())
//	{
//		if (my_set.find(input[i]) == my_set.end())
//		{
//			my_set.insert(input[i++]);
//			max_num = max(max_num, (int)my_set.size());
//		}
//		else
//			my_set.erase(input[left++]);
//
//	}
//	cout << max_num << endl;
//	return 0;
//}