/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */  //二叉树定义

class Solution
{
public:
	TreeNode*construct_tree(vector<int>preorder,int pre_start,int pre_end,
							vector<int> inorder,int in_start, int in_end)
	{
		//TreeNode*rootnode= new TreeNode(preorder[pre_start]);  //
		if(pre_end - pre_start < 0 || in_end - in_start < 0)//表示只有一个节点
		{
			
			return nullptr;
		}

		TreeNode*rootnode= new TreeNode(preorder[pre_start]);

		int i = in_start;
		int mid=0;
		while(i<= in_end)//没有为空
		{
			if(inorder[i] == preorder[pre_start])//在中序遍历中找到根节点
				mid = i;
			i++;
		}
		//int new_lenth = mid;
		int new_lenth = mid - in_start;

		//if(mid - pre_start -1 > 0 )//还有左子树
		if(1)
		{
			int new_prestart = pre_start+1;
			int new_preend = new_prestart + new_lenth -1;
			int new_instart = in_start;
			int new_inend = mid - 1;

			rootnode->left = construct_tree(preorder,new_prestart,new_preend,inorder,new_instart,new_inend);//递归构建左子树
		}

		//if(pre_end - mid  > 0)//还有右子树
		if(1)
		{
			int new_prestart = pre_start+1+new_lenth;
			int new_preend = pre_end;
			int new_instart = mid+1;
			int new_inend = in_end;

			rootnode->right = construct_tree(preorder,new_prestart,new_preend,inorder,new_instart,new_inend);//递归构建右子树
		}

		return rootnode;
	}

	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
	{
		if(pre.empty() || vin.empty())//任何一个为空，表示测试用例不对
			return nullptr;

		int length = pre.size();//长度
		int pre_start =0, vin_start = 0,pre_length =length, in_length = length;
		return construct_tree(pre,pre_start,pre_start+length-1, vin,vin_start,pre_start+length-1);
	}

};
