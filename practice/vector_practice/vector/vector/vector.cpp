//#include<iostream>
//#include<vector>
//
//using namespace std;
////Definition for binary tree
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////����������
//
///**
//* Definition for binary tree
//* struct TreeNode {
//*     int val;
//*     TreeNode *left;
//*     TreeNode *right;
//*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//* };
//*/  //����������
//
//class Solution
//{
//public:
//	TreeNode*construct_tree(vector<int>preorder, int pre_start, int pre_end,
//		vector<int> inorder, int in_start, int in_end)
//	{
//		//TreeNode*rootnode= new TreeNode(preorder[pre_start]);  //
//		if (pre_end - pre_start < 0 || in_end - in_start < 0)//��ʾֻ��һ���ڵ�
//		{
//
//			return nullptr;
//		}
//
//		TreeNode*rootnode = new TreeNode(preorder[pre_start]);
//
//		int i = in_start;
//		int mid = 0;
//		while (i <= in_end)//û��Ϊ��
//		{
//			if (inorder[i] == preorder[pre_start])//������������ҵ����ڵ�
//				mid = i;
//			i++;
//		}
//		int new_lenth = mid;
//
//		//if(mid - pre_start -1 > 0 )//����������
//		if (1)
//		{
//			int new_prestart = pre_start + 1;
//			int new_preend = new_prestart + new_lenth - 1;
//			int new_instart = in_start;
//			int new_inend = mid - 1;
//
//			rootnode->left = construct_tree(preorder, new_prestart, new_preend, inorder, new_instart, new_inend);//�ݹ鹹��������
//		}
//
//		//if(pre_end - mid  > 0)//����������
//		if (1)
//		{
//			int new_prestart = pre_start + 1 + mid;
//			int new_preend = pre_end;
//			int new_instart = mid + 1;
//			int new_inend = in_end;
//
//			rootnode->right = construct_tree(preorder, new_prestart, new_preend, inorder, new_instart, new_inend);//�ݹ鹹��������
//		}
//
//		return rootnode;
//	}
//
//	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
//	{
//		if (pre.empty() || vin.empty())//�κ�һ��Ϊ�գ���ʾ������������
//			return nullptr;
//
//		int length = pre.size();//����
//		int pre_start = 0, vin_start = 0, pre_length = length, in_length = length;
//		return construct_tree(pre, pre_start, pre_start + length - 1, vin, vin_start, pre_start + length - 1);
//	}
//
//
//};
//
//
////int main()
////{
////	//Solution solution;
////	//
////	//int a[] = { 1, 2, 4, 7, 3, 5, 6, 8 };
////	//int b[] = { 4, 7, 2, 1, 5, 3, 8, 6 };
////	//vector<int> preorder(a,a+8);
////	//vector<int> inorder(b, b + 8);
////	////solution.reConstructBinaryTree(preorder, inorder);
////	//int m = 1;
////	//int n = 2;
////	//int c = (m+n) / 2;
////	//cout <<c <<endl;
////	int i = 0;
////	while (i<5)
////	{
////		i++;
////		cout <<"���ǵ� "<<i<<"��"<< endl;
////
////	}
////}
