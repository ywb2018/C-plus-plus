////����һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S��
////����ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
//#include<vector>
//#include<iostream>
//#include<string>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//vector<int> FindNumbersWithSum(vector<int> array, int sum)
//{
//		vector<int>result;
//		int len = array.size();
//		if (len < 2)//���Ȳ���
//			return result;
//
//		map<int, int>my_map;
//		for (int i = 0; i<len; i++)
//			my_map[array[i]] = sum - array[i];
//		int mul=0;
//		for (int j = 0; j<len; j++)
//		{
//			if (find(array.begin(), array.end(), my_map[array[j]]) != array.end())//����鵽��
//			{
//				if (mul == 0)//δ����
//					mul = my_map[array[j]] * array[j];
//				if (my_map[array[j]] * array[j]<=mul)
//				{
//					result.clear();
//					mul = my_map[array[j]] * array[j];
//					result.push_back(array[j]);
//					result.push_back(my_map[array[j]]);
//				}
//			}
//		}
//
//		return result;
//}
//
//int main()
//{
//	int b[] = { 1, 2, 4, 7, 11, 15 },sum=15;
//	vector<int>a(b,b+6);
//	//vector<int>test = FindNumbersWithSum(a, sum);
//	string str = "";
//	str += 'a';
//	str += 'b';
//	cout <<str << endl;
//	system("pause");
//	return 0;
//}