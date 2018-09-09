/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，
//最长路径的长度为树的深度。
class Solution {
public:
	int max=0;
    int count=0;
	void search(TreeNode* root)
	{
		count++;
		if(root->left)
			search(root->left);
		if(root->right)
			search(root->right);
		if(count>max)
			max = count;
		count--;
	}
    int TreeDepth(TreeNode* pRoot)
    {
    	if(!pRoot)
    		return 0;
    	search(pRoot);

    	return max;
    }
};
//----------------别人的解法，大佬-----------------------------------
	int depth(TreeNode*node)
	{
		if(!node)
			return 0;
		return max(1+depth(node->left),1+depth(node->right));
	}
//----------------别人的解法，大佬-----------------------------------