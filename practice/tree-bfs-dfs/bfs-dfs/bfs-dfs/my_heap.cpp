#include <iostream>
#include <vector>
#include <time.h>
#include <Windows.h>
using namespace std;
void my_swap(int &a,int &b)
{
	int tempt =a;
	a = b;
	b = tempt;
}
void heap_adjust(int arr[],int root,int len)
{
	int lchild = 2 * root + 1;
	if (lchild < len)
	{
		int flag = lchild;
		int rchild = lchild + 1;
		if (rchild < len)//有右子节点
		{
			if (arr[rchild]>arr[flag])
				flag = rchild;
		}
		if (arr[root] < arr[flag])
		{
			my_swap(arr[root], arr[flag]);
			heap_adjust(arr,flag,len);
		}

	}
}
void heap_sort(int arr[],int len)
{
	//int len = arr.size();
	for (int i = len / 2 - 1; i >= 0; i--)
		heap_adjust(arr,i,len);
	for (int j = len - 1; j > 0; j--)
	{
		my_swap(arr[0],arr[j]);
		heap_adjust(arr,0,j);
	}
}
int main()
{
	int input;
	int a[11] = { 12, 45, 748, 12, 56, 3, 89, 4, 48, 2,-9 };
	/*vector<int>my_data;
	cin >> input;
	my_data.push_back(input);
	while (cin.get() != '\n')
	{
		int t;
		cin >> t;
		my_data.push_back(t);
	}*/
	vector<int>my_data(a,a+11);
	heap_sort(a,11);
	cout << endl;
	cout <<"排序后的输出为： "<< endl;
	for (int i = 0; i < my_data.size(); i++)
		cout << a[i] << " ";

	system("pause");
	return 0;
}