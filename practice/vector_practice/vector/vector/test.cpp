//#include<vector>
//#include<iostream>
//#include<map>
//#include<algorithm>
//#include<string>
//#include<sstream>
//using namespace std;
//class Solution {
//public:
//	bool judge(vector<int> sequence, int start, int end)
//	{
//		if (sequence.empty())
//			return false;
//		if (start < end)
//			return false;
//
//		int root = sequence[end];
//		int i = start;
//		for (; i<end; i++)
//		{
//			if (sequence[i]>root)
//				break;
//		}
//
//		int j = i;
//		for (; j<end; j++)
//		{
//			if (sequence[j]<root)
//				return false;
//		}
//
//		bool left = true;
//		if (i>start)
//			left = judge(sequence, start, i - 1);
//		bool right = true;
//		if (i<end)
//			right = judge(sequence, i, end - 1);
//
//		return (left&&right);
//	}
//	bool VerifySquenceOfBST(vector<int> sequence)
//	{
//		int length = sequence.size();//³¤¶È
//		bool out = true;
//		out = judge(sequence, 0, length - 1);
//
//		return out;
//	}
//};
//int get_mid(vector<int>arr, int start, int end)
//{
//	int location = start;
//	for (int i = start; i < end; i++)
//	{
//		//if (arr)
//		;
//	}
//	return 0;
//}
//void quicksort(vector<int>arr,int start,int end)
//{
//	if (!arr.size())
//		return;
//	int index = get_mid(arr,start,end);
//	quicksort(arr,start,index-1);
//	quicksort(arr,index+1,end);
//}
//int dp(vector<int>arr)
//{
//	int result = arr[0],length = arr.size();
//	int f = arr[0];
//	for (int i = 1; i < length; i++)
//	{
//		f = max(arr[i],f+arr[i]);
//		result = max(result,f);
//	}
//	return result;
//}
//int rec_opt(vector<int>arr,int i)
//{
//	if (i == 0)
//		return arr[0];
//	else if (i == 1)
//		return max(arr[0],arr[1]);
//	else
//	{
//		return max(rec_opt(arr,i-1),rec_opt(arr,i-2)+arr[i]);
//	}
//	
//}
//int dp_opt(vector<int>arr)
//{
//	int length = arr.size();
//	vector<int>opt(length);
//	opt[0] = arr[0];
//	opt[1] = max(arr[0],arr[1]);
//	for (int i = 2; i < length; i++)
//	{
//		opt[i] = max(opt[i-2]+arr[i],opt[i-1]);
//	}
//	return opt[length-1];
//}
//string NumberOf1Between1AndN_Solution(int n)
//{
//	stringstream inp;
//	inp << n;
//	string str = inp.str(); //½« int -¡·string
//
//	return str;
//}
//bool compare(string a, string b)
//{
//	return (a + b) > (b + a);
//}
//void PrintMinNumber(vector<int> numbers)
//{
//	vector<string>stri(numbers.size());
//	
//	
//	sort(stri.begin(), stri.end(), compare);
//	for (int j = 0; j<numbers.size(); j++)
//		cout << stri[j] << endl;
//}
//
//int main()
//{
//	bool out = true;
//	//int b[] = { 4, 8, 6, 12, 16, 14, 10};
//	int b[] = {1, -2, 3, 10, -4, 7, -5};
//	int c[] = {3,32,321};
//	to_string(2);
//	vector<int>a(c,c+3);
//	//PrintMinNumber(a);
//	map<char, int>c_to_number;
//	c_to_number['c'] ++;
//	map<char, int>::iterator;
//	cout << c_to_number['c']<<endl;
//	system("pause");
//}