//
//#include <iostream>
//#include <vector>
//#include <time.h>
//#include <Windows.h>
//using namespace std;
//
////������������
//void Swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////������ĺ����ǽ���,�������Ϊ���飬���ڵ�λ�ã����鳤��
//void Heap_build(int a[], int root, int length)
//{
//	int lchild = root * 2 + 1;//���ڵ�����ӽ���±�
//	if (lchild < length-1)//���ӽ���±겻�ܳ�������ĳ���
//	{
//		int flag = lchild;//flag�������ҽڵ������ֵ���±�
//		int rchild = lchild + 1;//���ڵ�����ӽ���±�
//		if (rchild < length)//���ӽ���±겻�ܳ�������ĳ���(����еĻ�)
//		{
//			if (a[rchild] > a[flag])//�ҳ������ӽ���е����ֵ
//			{
//				flag = rchild;
//			}
//		}
//		if (a[root] < a[flag])
//		{
//			//���������ͱȸ����������ӽڵ�
//			Swap(a[root], a[flag]);
//			//�Ӵ˴�����ӽڵ���Ǹ�λ�ÿ�ʼ�ݹ齨��
//			Heap_build(a, flag, length);
//		}
//	}
//}
//
//void Heap_sort(int a[], int len)
//{
//	for (int i = (len/2) - 1; i >= 0; --i)//�����һ����Ҷ�ӽڵ�ĸ���㿪ʼ����
//	{
//		Heap_build(a, i, len);
//	}
//
//	for (int j = len - 1; j > 0; --j)//j��ʾ�����ʱ�ĳ��ȣ���Ϊlen�����Ѿ������ˣ���len-1��ʼ
//	{
//		Swap(a[0], a[j]);//������βԪ��,�����ֵ��������������λ�ñ���
//		Heap_build(a, 0, j);//ȥ�����λ�õ�Ԫ�����½��ѣ��˴�j��ʾ����ĳ��ȣ����һ��λ���±��Ϊlen-2
//	}
//
//}
//int main(int argc, char **argv)
//{
//	clock_t Start_time = clock();
//	int a[10] = { 12, 45, 748, 12, 56, 3, 89, 4, 48, 2 };
//	Heap_sort(a, 10);
//	for (size_t i = 0; i != 10; ++i)
//	{
//		cout << a[i] << " ";
//	}
//	clock_t End_time = clock();
//	cout << endl;
//	cout << "Total running time is: " << static_cast<double>(End_time - Start_time) / CLOCKS_PER_SEC * 1000 << " ms" << endl;
//	cin.get();
//	return 0;
//}