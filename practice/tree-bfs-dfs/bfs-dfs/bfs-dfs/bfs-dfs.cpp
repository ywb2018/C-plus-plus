//#include<iostream>
//#include<vector>
//#include<stack>
//#include<queue>
//
//using namespace std;
//
////Definition for binary tree
////二叉树定义
//struct TreeNode 
//{
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//  
//
////迭代实现版本
//void dfs(TreeNode*root)
//{
//	if (!root)
//		return;
//	stack<TreeNode*>my_stack;
//
//	my_stack.push(root);
//	while (!my_stack.empty())//不为空
//	{
//		TreeNode* this_node = my_stack.top();
//		cout << this_node->val<< endl;
//		my_stack.pop();
//		if (!this_node->left)
//			my_stack.push(this_node->left);
//		if (!this_node->right)
//			my_stack.push(this_node->right);
//	}
//}
////递归实现版本,先序遍历
//void rec_dfs(TreeNode*root)
//{
//	if (!root)
//		return;
//	cout <<root->val<< endl;
//	if (!root->left)
//		rec_dfs(root->left);
//	if (!root->right)
//		rec_dfs(root->right);
//}
//void bfs(TreeNode* root)
//{
//	queue<TreeNode*>my_que;
//	my_que.push(root);
//	while (!my_que.empty())
//	{
//		TreeNode*this_node = my_que.front();
//		cout << this_node->val << endl;
//
//		if (!this_node->left)
//			my_que.push(this_node->left);
//		if (!this_node->right)
//			my_que.push(this_node->right);
//
//		my_que.pop();
//	}
//}
//
//int main()
//{
//
//
//	return 0;
//}