#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void my_swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void quick_sort(int arr[],int left,int right)
{
	if (left > right)
		return;

	int tempt = arr[left];
	int low = left, high = right;
	while (low < high)
	{
		while (low < high && arr[high] >= tempt)
			high--;
		while (low < high && arr[low] <= tempt)
			low++;
		my_swap(arr[low],arr[high]);
	}
	my_swap(arr[left],arr[low]);
	quick_sort(arr,left,low-1);
	quick_sort(arr,low+1,right);

}
int main()
{
	int n;
	/*cin >> n;
	vector<int>a;
	cin >> n;
	a.push_back(n);
	while(cin.get()!='\n')
	{
		int t;
		cin >> t;
		a.push_back(t);
	}*/
	int data[10] = { 5, 4, 9, 1, 7, 6, 2, 3, 8 ,-3};
	vector<int>a(data,data+10);
	quick_sort(data,0, 9);
	for (int i = 0; i < 10; i++)
		cout <<data[i]<< " ";
	system("pause");
	return 0;
}